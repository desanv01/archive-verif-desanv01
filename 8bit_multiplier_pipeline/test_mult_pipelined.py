"""Exhaustive cocotb verification for the 8-bit pipelined multiplier."""

from collections import deque

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, ReadOnly, RisingEdge
import vsc


MAX8 = (1 << 8) - 1
MAX16 = (1 << 16) - 1
EXHAUSTIVE_TRANSACTIONS = 256 * 256

PRODUCT_ZERO = 0
PRODUCT_ONE = 1
PRODUCT_BYTE = 2
PRODUCT_MEDIUM = 3
PRODUCT_HIGH = 4
PRODUCT_MAX = 5


def multiplier_model(a: int, b: int) -> int:
    """Unsigned 8-bit by 8-bit reference model."""
    return (a & MAX8) * (b & MAX8)


def product_class(product: int) -> int:
    """Classify the 16-bit product for useful functional corner coverage."""
    if product == 0:
        return PRODUCT_ZERO
    if product == 1:
        return PRODUCT_ONE
    if product <= 0x00FF:
        return PRODUCT_BYTE
    if product <= 0x3FFF:
        return PRODUCT_MEDIUM
    if product == 0xFE01:
        return PRODUCT_MAX
    return PRODUCT_HIGH


@vsc.covergroup
class MultiplierCovergroup:
    """Functional coverage for all operands, valid states, and products."""

    def __init__(self):
        self.with_sample(
            dict(
                a=vsc.bit_t(8),
                b=vsc.bit_t(8),
                valid_in=vsc.bit_t(1),
                p_class=vsc.bit_t(3),
            )
        )

        # Separate bin objects are required for the two coverpoints.
        a_bins = {f"value_{value:03d}": vsc.bin(value) for value in range(256)}
        b_bins = {f"value_{value:03d}": vsc.bin(value) for value in range(256)}

        self.cp_a = vsc.coverpoint(self.a, bins=a_bins)
        self.cp_b = vsc.coverpoint(self.b, bins=b_bins)
        self.cp_valid_in = vsc.coverpoint(
            self.valid_in,
            bins={"invalid": vsc.bin(0), "valid": vsc.bin(1)},
        )
        self.cp_product_class = vsc.coverpoint(
            self.p_class,
            bins={
                "zero": vsc.bin(PRODUCT_ZERO),
                "one": vsc.bin(PRODUCT_ONE),
                "byte_range": vsc.bin(PRODUCT_BYTE),
                "medium": vsc.bin(PRODUCT_MEDIUM),
                "high": vsc.bin(PRODUCT_HIGH),
                "maximum": vsc.bin(PRODUCT_MAX),
            },
        )

        # Every A x B pair is executed: 256 x 256 = 65,536 cross bins.
        self.cp_a_x_b = vsc.cross([self.cp_a, self.cp_b])


DIRECTED_SEQUENCE = (
    # The first three transactions reproduce the supplied timing diagram.
    ("timing_T0", 1, 0x05, 0x1B),  # 5 x 27   = 0x0087
    ("timing_T1", 1, 0xFF, 0xFF),  # 255 x 255 = 0xFE01
    ("timing_T2", 1, 0x10, 0x10),  # 16 x 16   = 0x0100
    ("bubble_after_timing", 0, 0x00, 0x00),
    ("zero_times_max", 1, 0x00, 0xFF),
    ("max_times_zero", 1, 0xFF, 0x00),
    ("one_times_max", 1, 0x01, 0xFF),
    ("bubble_between_results", 0, 0xA5, 0x5A),
    ("max_times_one", 1, 0xFF, 0x01),
    ("high_bit_square", 1, 0x80, 0x80),
    ("alternating_bits", 1, 0xAA, 0x55),
    ("low_nibble_square", 1, 0x0F, 0x0F),
)


@cocotb.test()
async def test_mult_pipelined_exhaustive(dut):
    """Verify reset, valid latency, bubbles, throughput, and every A/B pair."""
    cocotb.start_soon(Clock(dut.clk, 10, "ns").start())

    dut.rst.value = 1
    dut.in_valid.value = 0
    dut.A.value = 0
    dut.B.value = 0

    # Reset is synchronous and only guarantees that valid state is cleared.
    for _ in range(3):
        await RisingEdge(dut.clk)
    await ReadOnly()
    assert int(dut.out_valid.value) == 0, "out_valid was not cleared by reset"
    await FallingEdge(dut.clk)
    dut.rst.value = 0

    coverage = MultiplierCovergroup()
    expected = deque()
    previous_valid = 0
    checked = 0
    launched = 0

    async def run_cycle(valid: int, a: int, b: int, label: str, log_input=False):
        """Drive one cycle and check the transaction leaving stage two."""
        nonlocal previous_valid, checked, launched

        a &= MAX8
        b &= MAX8
        valid = int(bool(valid))
        dut.in_valid.value = valid
        dut.A.value = a
        dut.B.value = b

        model_product = multiplier_model(a, b)
        coverage.sample(a, b, valid, product_class(model_product))

        if valid:
            expected.append((label, a, b, model_product))
            launched += 1
            if log_input:
                dut._log.info(
                    f"IN  {label}: A=0x{a:02X} B=0x{b:02X} "
                    f"expected P=0x{model_product:04X}"
                )

        await RisingEdge(dut.clk)
        await ReadOnly()

        got_valid = int(dut.out_valid.value)
        assert got_valid == previous_valid, (
            f"out_valid latency error during {label}: "
            f"expected {previous_valid}, got {got_valid}"
        )

        if got_valid:
            assert expected, f"out_valid asserted with an empty scoreboard at {label}"
            out_label, out_a, out_b, expected_product = expected.popleft()
            got_product = int(dut.P.value)
            assert got_product == expected_product, (
                f"Product mismatch for {out_label}: "
                f"0x{out_a:02X} x 0x{out_b:02X}\n"
                f"Expected: 0x{expected_product:04X}\n"
                f"Got:      0x{got_product:04X}"
            )
            checked += 1
            if log_input:
                dut._log.info(
                    f"OUT {out_label}: P=0x{got_product:04X} PASS"
                )

        previous_valid = valid
        await FallingEdge(dut.clk)

    # Directed sequence checks the timing-diagram values and valid bubbles.
    for label, valid, a, b in DIRECTED_SEQUENCE:
        await run_cycle(valid, a, b, label, log_input=True)

    # Flush the directed sequence and prove that a bubble reaches out_valid.
    await run_cycle(0, 0, 0, "directed_drain_0", log_input=True)
    await run_cycle(0, 0, 0, "directed_drain_1", log_input=True)
    assert not expected, "Directed-test scoreboard did not drain"

    # Assert reset with in_valid high: reset must suppress that transaction.
    dut.rst.value = 1
    dut.in_valid.value = 1
    dut.A.value = 0xFF
    dut.B.value = 0xFF
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert int(dut.out_valid.value) == 0, "reset did not suppress out_valid"
    previous_valid = 0
    await FallingEdge(dut.clk)
    dut.rst.value = 0

    # Exhaust all 65,536 unsigned operand permutations at full throughput.
    transaction = 0
    for a in range(256):
        for b in range(256):
            await run_cycle(1, a, b, f"exhaustive_{a:02X}_{b:02X}")
            transaction += 1
            if transaction % 8192 == 0:
                dut._log.info(
                    f"Exhaustive progress: {transaction}/{EXHAUSTIVE_TRANSACTIONS}"
                )

    # One invalid cycle retires the last valid input; another checks the bubble.
    await run_cycle(0, 0, 0, "exhaustive_drain_0")
    await run_cycle(0, 0, 0, "exhaustive_drain_1")

    assert not expected, "Final scoreboard did not drain"
    assert checked == launched, f"Checked {checked} of {launched} transactions"

    vsc.write_coverage_db("cov.xml", fmt="xml")
    dut._log.info(
        f"PASS: checked {checked} products, including all "
        f"{EXHAUSTIVE_TRANSACTIONS} A x B combinations"
    )


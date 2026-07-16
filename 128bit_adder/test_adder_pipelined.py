"""Cocotb verification for the four-stage 128-bit pipelined adder."""

from collections import deque
import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge, ReadOnly, RisingEdge
import vsc


WIDTH = 128
MASK128 = (1 << WIDTH) - 1
PIPELINE_EDGES = 4
RANDOM_SEED = 0x128ADD
RANDOM_TESTS = 100

ZERO = 0
ONE = 1
LOW64 = 2
HIGH128 = 3
MAXIMUM = 4
PATTERN = 5

CLASS_VALUES = (
    ("zero", 0),
    ("one", 1),
    ("low64", 0x0000000000000000FFFFFFFFFFFFFFFF),
    ("high128", 0x80000000000000000000000000000000),
    ("maximum", MASK128),
    ("pattern", 0xA5A5A5A55A5A5A5A0123456789ABCDEF),
)


def adder_model(a: int, b: int) -> tuple[int, int]:
    """Return the wrapped 128-bit sum and the carry-out bit."""
    total = a + b
    return total & MASK128, (total >> WIDTH) & 1


def operand_class(value: int) -> int:
    """Map a 128-bit operand into a compact functional-coverage class."""
    if value == 0:
        return ZERO
    if value == 1:
        return ONE
    if value == MASK128:
        return MAXIMUM
    if value == CLASS_VALUES[PATTERN][1]:
        return PATTERN
    if value <= ((1 << 64) - 1):
        return LOW64
    return HIGH128


@vsc.covergroup
class PipelinedAdderCovergroup:
    def __init__(self):
        self.with_sample(
            dict(
                a_class=vsc.bit_t(3),
                b_class=vsc.bit_t(3),
                carry_out=vsc.bit_t(1),
            )
        )

        def new_class_bins():
            return {
                "zero": vsc.bin(ZERO),
                "one": vsc.bin(ONE),
                "low64": vsc.bin(LOW64),
                "high128": vsc.bin(HIGH128),
                "maximum": vsc.bin(MAXIMUM),
                "pattern": vsc.bin(PATTERN),
            }

        self.cp_a_class = vsc.coverpoint(self.a_class, bins=new_class_bins())
        self.cp_b_class = vsc.coverpoint(self.b_class, bins=new_class_bins())
        self.cp_carry = vsc.coverpoint(
            self.carry_out,
            bins={"no_carry": vsc.bin(0), "carry": vsc.bin(1)},
        )
        self.cp_a_x_b = vsc.cross([self.cp_a_class, self.cp_b_class])


def build_test_vectors() -> list[tuple[str, int, int]]:
    """Create directed class crosses, carry boundaries, and random traffic."""
    vectors = []

    # Every operand-class cross: 6 x 6 = 36 directed combinations.
    for a_name, a_value in CLASS_VALUES:
        for b_name, b_value in CLASS_VALUES:
            vectors.append((f"class_{a_name}_x_{b_name}", a_value, b_value))

    vectors.extend(
        [
            ("zero_plus_zero", 0, 0),
            ("one_plus_one", 1, 1),
            ("maximum_plus_one", MASK128, 1),
            ("maximum_plus_maximum", MASK128, MASK128),
            ("alternating_no_carry", int("AA" * 16, 16), int("55" * 16, 16)),
            ("carry_bit31_to_32", (1 << 32) - 1, 1),
            ("carry_bit63_to_64", (1 << 64) - 1, 1),
            ("carry_bit95_to_96", (1 << 96) - 1, 1),
            ("carry_bit127_to_cout", (1 << 127), (1 << 127)),
            ("upper_and_lower_mix", 0xFFFFFFFF00000000FFFFFFFF00000000,
             0x00000000FFFFFFFF00000000FFFFFFFF),
        ]
    )

    # Walking-one and carry-propagation cases at each 32-bit stage boundary.
    for bit in (0, 31, 32, 63, 64, 95, 96, 127):
        vectors.append((f"walking_one_bit_{bit}", 1 << bit, 1 << bit))

    rng = random.Random(RANDOM_SEED)
    for index in range(RANDOM_TESTS):
        vectors.append((f"random_{index:03d}", rng.getrandbits(128), rng.getrandbits(128)))

    return vectors


@cocotb.test()
async def test_pipelined_128bit_adder(dut):
    """Check latency, full-throughput ordering, arithmetic, and coverage."""
    cocotb.start_soon(Clock(dut.clk, 10, "ns").start())

    dut.rst.value = 1
    dut.A.value = 0
    dut.B.value = 0

    # The reset is synchronous, so hold it through three rising edges.
    for _ in range(3):
        await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)

    assert int(dut.SUM.value) == 0, "SUM was not cleared by reset"
    assert int(dut.COUT.value) == 0, "COUT was not cleared by reset"
    dut.rst.value = 0

    coverage = PipelinedAdderCovergroup()
    pending = deque()
    vectors = build_test_vectors()
    checked = 0

    # Inputs are changed on falling edges. Each loop then observes one rising
    # edge, allowing one new operation to enter the pipeline every clock.
    for index, (name, a_value, b_value) in enumerate(vectors):
        dut.A.value = a_value
        dut.B.value = b_value

        expected_sum, expected_carry = adder_model(a_value, b_value)
        pending.append((name, expected_sum, expected_carry))
        coverage.sample(
            operand_class(a_value), operand_class(b_value), expected_carry
        )

        dut._log.info(
            f"IN  {index:03d} {name}: A=0x{a_value:032X} B=0x{b_value:032X}"
        )

        await RisingEdge(dut.clk)
        await ReadOnly()

        # The first operation reaches the output register on the fourth edge.
        if len(pending) >= PIPELINE_EDGES:
            out_name, exp_sum, exp_carry = pending.popleft()
            got_sum = int(dut.SUM.value)
            got_carry = int(dut.COUT.value)

            assert got_sum == exp_sum, (
                f"SUM mismatch for {out_name}\n"
                f"Expected: 0x{exp_sum:032X}\n"
                f"Got:      0x{got_sum:032X}"
            )
            assert got_carry == exp_carry, (
                f"COUT mismatch for {out_name}: "
                f"expected {exp_carry}, got {got_carry}"
            )
            checked += 1
            dut._log.info(
                f"OUT {checked - 1:03d} {out_name}: "
                f"SUM=0x{got_sum:032X} COUT={got_carry} PASS"
            )

        await FallingEdge(dut.clk)

    # Three more edges retire the final three pending operations.
    dut.A.value = 0
    dut.B.value = 0
    while pending:
        await RisingEdge(dut.clk)
        await ReadOnly()

        out_name, exp_sum, exp_carry = pending.popleft()
        got_sum = int(dut.SUM.value)
        got_carry = int(dut.COUT.value)

        assert got_sum == exp_sum, (
            f"SUM mismatch while draining {out_name}: "
            f"expected 0x{exp_sum:032X}, got 0x{got_sum:032X}"
        )
        assert got_carry == exp_carry, (
            f"COUT mismatch while draining {out_name}: "
            f"expected {exp_carry}, got {got_carry}"
        )
        checked += 1
        await FallingEdge(dut.clk)

    assert checked == len(vectors), (
        f"Scoreboard checked {checked} of {len(vectors)} operations"
    )

    # Confirm that synchronous reset still clears the registered output.
    dut.rst.value = 1
    dut.A.value = MASK128
    dut.B.value = MASK128
    await RisingEdge(dut.clk)
    await ReadOnly()
    assert int(dut.SUM.value) == 0, "SUM did not clear on final reset"
    assert int(dut.COUT.value) == 0, "COUT did not clear on final reset"

    vsc.write_coverage_db("cov.xml", fmt="xml")
    dut._log.info(
        f"PASS: all {checked} directed/random pipelined additions matched"
    )


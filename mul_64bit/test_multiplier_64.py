# Cocotb tests for the unsigned 64-bit x 64-bit multiplier

import random
import vsc
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, FallingEdge, RisingEdge, with_timeout


MASK_64 = (1 << 64) - 1
MASK_128 = (1 << 128) - 1

@vsc.covergroup
class MultiplierCovergroup:
    def __init__(self):
        self.with_sample(dict(
            a=vsc.bit_t(64),
            b=vsc.bit_t(64)
        ))

        operand_bins = {
            "zero": vsc.bin(0),
            "one": vsc.bin(1),
            "low_32bit": vsc.bin([2, 0xFFFFFFFF]),
            "high_64bit": vsc.bin([0x100000000, MASK_64])
        }

        zero_state_bins = {
            "zero": vsc.bin(0),
            "nonzero": vsc.bin([1, MASK_64])
        }

        self.cp_a = vsc.coverpoint(self.a, bins=operand_bins)
        self.cp_b = vsc.coverpoint(self.b, bins=operand_bins)

        self.cp_a_zero_state = vsc.coverpoint(
            self.a, bins=zero_state_bins
        )
        self.cp_b_zero_state = vsc.coverpoint(
            self.b, bins=zero_state_bins
        )

        self.cp_a_x_b = vsc.cross([
            self.cp_a_zero_state,
            self.cp_b_zero_state
        ])


multiplier_cg = MultiplierCovergroup()


def multiplier_model(a: int, b: int) -> int:
    """Golden model for unsigned 64-bit multiplication."""
    return ((a & MASK_64) * (b & MASK_64)) & MASK_128


async def reset_dut(dut):
    """Reset the multiplier to a known state."""
    dut.reset.value = 1
    dut.start.value = 0
    dut.multiplicand_in.value = 0
    dut.multiplier_in.value = 0

    await ClockCycles(dut.clk, 2)
    await FallingEdge(dut.clk)

    dut.reset.value = 0
    await ClockCycles(dut.clk, 2)


async def run_multiplication(dut, a: int, b: int) -> int:
    """Start one multiplication and return the DUT result."""

    # Apply inputs away from the active rising clock edge.
    await FallingEdge(dut.clk)

    dut.multiplicand_in.value = a
    dut.multiplier_in.value = b
    dut.start.value = 1

    # Hold start for one complete clock cycle.
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.start.value = 0

    # The multiplier should take 64 clock cycles.
    await with_timeout(RisingEdge(dut.done), 700, "ns")

    result = int(dut.product.value)

    dut._log.info(
        f"A={a:#018x}, B={b:#018x}, "
        f"expected={multiplier_model(a, b):#034x}, "
        f"DUT={result:#034x}"
    )

    # Sample functional coverage and update the UCIS XML database.
    multiplier_cg.sample(a, b)
    vsc.write_coverage_db("cov.xml", fmt="xml")
    
    return result


@cocotb.test()
async def multiplier_basic_test(dut):
    """Test a simple 7 x 5 multiplication."""

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    await reset_dut(dut)

    a = 7
    b = 5

    result = await run_multiplication(dut, a, b)
    expected = multiplier_model(a, b)

    assert result == expected, (
        f"Basic multiplication failed: {a} x {b} = "
        f"{result}, expected {expected}"
    )


@cocotb.test()
async def multiplier_corner_cases_test(dut):
    """Test important 64-bit multiplication corner cases."""

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    await reset_dut(dut)

    test_cases = [
        (0, 0),
        (0, 25),
        (25, 0),
        (1, 1),
        (1, MASK_64),
        (MASK_64, 1),
        (MASK_64, MASK_64),
        (1 << 63, 2),
        (0x123456789ABCDEF0, 0x10),
        (0xFFFFFFFF00000000, 0x00000000FFFFFFFF),
    ]

    for a, b in test_cases:
        result = await run_multiplication(dut, a, b)
        expected = multiplier_model(a, b)

        assert result == expected, (
            f"Corner-case failure: {a:#x} x {b:#x} = "
            f"{result:#x}, expected {expected:#x}"
        )

    dut._log.info(f"Passed {len(test_cases)} corner cases")


@cocotb.test()
async def multiplier_randomised_test(dut):
    """Test several deterministic random 64-bit operands."""

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    await reset_dut(dut)

    # Fixed seed makes failures repeatable.
    random.seed(64)

    for test_number in range(10):
        a = random.getrandbits(64)
        b = random.getrandbits(64)

        result = await run_multiplication(dut, a, b)
        expected = multiplier_model(a, b)

        assert result == expected, (
            f"Random test {test_number} failed: "
            f"{a:#x} x {b:#x} = {result:#x}, "
            f"expected {expected:#x}"
        )

    dut._log.info("Passed 10 random 64-bit multiplication tests")

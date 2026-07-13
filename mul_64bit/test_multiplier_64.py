import random

import cocotb
import vsc
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, FallingEdge, ReadOnly, RisingEdge
from cocotb.triggers import with_timeout


MIN_64 = 0
MAX_64 = (1 << 64) - 1
MASK_128 = (1 << 128) - 1
NA_BIT = 127

SC_MIN_MIN = 0
SC_MAX_MAX = 1
SC_MIN_MAX = 2
SC_MAX_MIN = 3
SC_WALKING_ONE = 4
SC_WALKING_ZERO = 5
SC_RANDOM = 6


def operand_bins():
    return {
        "minimum": vsc.bin(MIN_64),
        "one": vsc.bin(1),
        "low_32bit": vsc.bin([2, 0xFFFFFFFF]),
        "high_64bit": vsc.bin([0x100000000, MAX_64]),
    }


def zero_state_bins():
    return {
        "zero": vsc.bin(0),
        "nonzero": vsc.bin([1, MAX_64]),
    }


@vsc.covergroup
class MultiplierCovergroup:
    def __init__(self):
        self.with_sample(dict(
            a=vsc.bit_t(64),
            b=vsc.bit_t(64),
            scenario=vsc.bit_t(3),
            one_bit=vsc.bit_t(7),
            zero_bit=vsc.bit_t(7),
        ))

        self.cp_a = vsc.coverpoint(
            self.a,
            bins=operand_bins(),
        )

        self.cp_b = vsc.coverpoint(
            self.b,
            bins=operand_bins(),
        )

        self.cp_scenario = vsc.coverpoint(
            self.scenario,
            bins={
                "minimum_x_minimum": vsc.bin(SC_MIN_MIN),
                "maximum_x_maximum": vsc.bin(SC_MAX_MAX),
                "minimum_x_maximum": vsc.bin(SC_MIN_MAX),
                "maximum_x_minimum": vsc.bin(SC_MAX_MIN),
                "walking_ones": vsc.bin(SC_WALKING_ONE),
                "walking_zeros": vsc.bin(SC_WALKING_ZERO),
                "random_100": vsc.bin(SC_RANDOM),
            },
        )

        self.cp_walking_one_bit = vsc.coverpoint(
            self.one_bit,
            bins={
                "bit_positions": vsc.bin_array([], [0, 63]),
            },
            ignore_bins={
                "not_applicable": vsc.bin(NA_BIT),
            },
        )

        self.cp_walking_zero_bit = vsc.coverpoint(
            self.zero_bit,
            bins={
                "bit_positions": vsc.bin_array([], [0, 63]),
            },
            ignore_bins={
                "not_applicable": vsc.bin(NA_BIT),
            },
        )

        self.cp_a_zero_state = vsc.coverpoint(
            self.a,
            bins=zero_state_bins(),
        )

        self.cp_b_zero_state = vsc.coverpoint(
            self.b,
            bins=zero_state_bins(),
        )

        self.cp_a_x_b = vsc.cross([
            self.cp_a_zero_state,
            self.cp_b_zero_state,
        ])


multiplier_cg = MultiplierCovergroup()


def multiplier_model(a: int, b: int) -> int:
    return (a * b) & MASK_128


def walking_one_cases(bit=0):
    if bit == 64:
        return ()

    value = 1 << bit

    current_cases = (
        (value, MAX_64, SC_WALKING_ONE, bit, NA_BIT),
        (MAX_64, value, SC_WALKING_ONE, bit, NA_BIT),
    )

    return current_cases + walking_one_cases(bit + 1)


def walking_zero_cases(bit=0):
    if bit == 64:
        return ()

    value = MAX_64 ^ (1 << bit)

    current_cases = (
        (value, MAX_64, SC_WALKING_ZERO, NA_BIT, bit),
        (MAX_64, value, SC_WALKING_ZERO, NA_BIT, bit),
    )

    return current_cases + walking_zero_cases(bit + 1)


def random_cases(remaining):
    if remaining == 0:
        return ()

    current_case = (
        random.getrandbits(64),
        random.getrandbits(64),
        SC_RANDOM,
        NA_BIT,
        NA_BIT,
    )

    return (current_case,) + random_cases(remaining - 1)


DIRECTED_CASES = (
    (MIN_64, MIN_64, SC_MIN_MIN, NA_BIT, NA_BIT),
    (MAX_64, MAX_64, SC_MAX_MAX, NA_BIT, NA_BIT),
    (MIN_64, MAX_64, SC_MIN_MAX, NA_BIT, NA_BIT),
    (MAX_64, MIN_64, SC_MAX_MIN, NA_BIT, NA_BIT),
)


async def reset_dut(dut):
    dut.reset.value = 1
    dut.start.value = 0
    dut.multiplicand_in.value = 0
    dut.multiplier_in.value = 0

    await ClockCycles(dut.clk, 2)
    await FallingEdge(dut.clk)

    dut.reset.value = 0
    await ClockCycles(dut.clk, 2)


async def run_multiplication(
    dut,
    a,
    b,
    scenario,
    one_bit=NA_BIT,
    zero_bit=NA_BIT,
):
    await FallingEdge(dut.clk)

    dut.multiplicand_in.value = a
    dut.multiplier_in.value = b
    dut.start.value = 1

    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)

    dut.start.value = 0

    await with_timeout(
        RisingEdge(dut.done),
        800,
        "ns",
    )

    await ReadOnly()

    result = int(dut.product.value)
    expected = multiplier_model(a, b)

    assert result == expected, (
        f"Multiplication failed: "
        f"A={a:#018x}, B={b:#018x}, "
        f"expected={expected:#034x}, "
        f"result={result:#034x}"
    )

    multiplier_cg.sample(
        a,
        b,
        scenario,
        one_bit,
        zero_bit,
    )

    return result


async def run_cases(dut, cases, index=0):
    if index == len(cases):
        return

    a, b, scenario, one_bit, zero_bit = cases[index]

    await run_multiplication(
        dut,
        a,
        b,
        scenario,
        one_bit,
        zero_bit,
    )

    if index % 25 == 0 or index + 1 == len(cases):
        dut._log.info(
            f"Completed test {index + 1}/{len(cases)}"
        )

    await run_cases(dut, cases, index + 1)


@cocotb.test()
async def multiplier_complete_coverage_test(dut):
    cocotb.start_soon(
        Clock(dut.clk, 10, unit="ns").start()
    )

    await reset_dut(dut)

    random.seed(64)

    all_cases = (
        DIRECTED_CASES
        + walking_one_cases()
        + walking_zero_cases()
        + random_cases(100)
    )

    dut._log.info(
        f"Running {len(all_cases)} multiplication tests"
    )

    await run_cases(dut, all_cases)

    vsc.report_coverage(details=True)
    vsc.write_coverage_db("cov.xml", fmt="xml")

    dut._log.info("Functional coverage written to cov.xml")

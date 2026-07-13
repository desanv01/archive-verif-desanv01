"""Cocotb verification for the balanced-tree unsigned 64-bit multiplier."""

import random

import cocotb
import vsc
from cocotb.triggers import Timer


MASK_64 = (1 << 64) - 1
MASK_128 = (1 << 128) - 1
TEST_BASIC = 0
TEST_DIRECTED = 1
TEST_RANDOM = 2


def multiplier_model(a: int, b: int) -> int:
    """Golden model for unsigned 64-bit by 64-bit multiplication."""
    return ((a & MASK_64) * (b & MASK_64)) & MASK_128


def operand_bins():
    return {
        "zero": vsc.bin(0),
        "one": vsc.bin(1),
        "low_32bit": vsc.bin([2, 0xFFFFFFFF]),
        "high_64bit": vsc.bin([0x100000000, MASK_64]),
    }


def zero_state_bins():
    return {
        "zero": vsc.bin(0),
        "nonzero": vsc.bin([1, MASK_64]),
    }


@vsc.covergroup
class TreeMultiplierCovergroup:
    def __init__(self):
        self.with_sample(dict(
            a=vsc.bit_t(64),
            b=vsc.bit_t(64),
            test_type=vsc.bit_t(2),
        ))

        self.cp_a = vsc.coverpoint(self.a, bins=operand_bins())
        self.cp_b = vsc.coverpoint(self.b, bins=operand_bins())
        self.cp_test_type = vsc.coverpoint(self.test_type, bins={
            "basic": vsc.bin(TEST_BASIC),
            "directed": vsc.bin(TEST_DIRECTED),
            "random": vsc.bin(TEST_RANDOM),
        })
        self.cp_a_zero_state = vsc.coverpoint(
            self.a, bins=zero_state_bins()
        )
        self.cp_b_zero_state = vsc.coverpoint(
            self.b, bins=zero_state_bins()
        )
        self.cp_a_x_b = vsc.cross([
            self.cp_a_zero_state,
            self.cp_b_zero_state,
        ])


coverage = TreeMultiplierCovergroup()


async def check_product(dut, a: int, b: int, test_type: int):
    dut.a.value = a
    dut.b.value = b
    await Timer(2, unit="ns")

    expected = multiplier_model(a, b)
    actual = int(dut.product.value)
    coverage.sample(a, b, test_type)

    dut._log.info(
        f"A={a:#018x} B={b:#018x} "
        f"expected={expected:#034x} DUT={actual:#034x}"
    )
    assert actual == expected, (
        f"Tree multiplier failed: {a:#x} * {b:#x} "
        f"= {actual:#x}, expected {expected:#x}"
    )


@cocotb.test()
async def multiplier_basic_test(dut):
    await check_product(dut, 7, 5, TEST_BASIC)
    vsc.write_coverage_db("cov.xml", fmt="xml")


@cocotb.test()
async def multiplier_directed_test(dut):
    cases = (
        (0, 0),
        (0, MASK_64),
        (MASK_64, 0),
        (MASK_64, MASK_64),
        (1, 1),
        (1, MASK_64),
        (MASK_64, 1),
        (25, 0xFFFFFFFF),
        (0xFFFFFFFF, 25),
        (2, 0x100000000),
        (0x100000000, 2),
        (0x123456789ABCDEF0, 0x0FEDCBA987654321),
    )

    for a, b in cases:
        await check_product(dut, a, b, TEST_DIRECTED)

    vsc.write_coverage_db("cov.xml", fmt="xml")


@cocotb.test()
async def multiplier_randomised_test(dut):
    random.seed(64)

    for _ in range(100):
        await check_product(
            dut,
            random.getrandbits(64),
            random.getrandbits(64),
            TEST_RANDOM,
        )

    vsc.report_coverage(details=True)
    vsc.write_coverage_db("cov.xml", fmt="xml")

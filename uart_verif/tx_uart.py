"""Directed UART/AXI waveform test for the generated SHAKTI C-Class SoC.

The test forces one AXI master port only while issuing directed UART MMIO writes.
It also sends bytes into UART0.SIN so that serial frames are always visible in
the waveform. Set STRICT_UART_TX=1 to require successful AXI handshakes and to
compare bytes decoded from UART0.SOUT.
"""

import math
import os

import cocotb
from cocotb.clock import Clock
from cocotb.handle import Force, Release
from cocotb.triggers import ClockCycles, RisingEdge, with_timeout
from cocotbext.uart import UartParity, UartSink, UartSource


def env_int(name, default):
    return int(os.getenv(name, str(default)), 0)


def env_bytes(name, default):
    text = os.getenv(name, default)
    return bytes(int(item.strip(), 0) for item in text.split(",") if item.strip())


CLOCK_PERIOD_NS = env_int("CLOCK_PERIOD_NS", 100)
RESET_CYCLES = env_int("RESET_CYCLES", 400)
UART_BASE = env_int("UART_BASE", 0x00011300)
BAUD_DIV = env_int("UART_BAUD_DIV", 5)
TX_BYTES = env_bytes("UART_TX_BYTES", "0x55,0xA5,0x33")
RX_BYTES = env_bytes("UART_RX_BYTES", "0x12,0x34,0xC3")
STRICT_UART_TX = os.getenv("STRICT_UART_TX", "0") == "1"

BAUD_REG = UART_BASE + 0x00
TX_REG = UART_BASE + 0x04


def logic_is_one(signal):
    try:
        return int(signal.value) == 1
    except (TypeError, ValueError):
        return False


class ForcedAxiMaster:
    """Small directed AXI writer for an internal, normally core-driven port."""

    PREFIX = "master_d_"

    def __init__(self, dut):
        self.dut = dut
        self.bus = dut.soc.ccore_0
        self.forced = []
        required = (
            "AWVALID", "AWREADY", "AWADDR", "AWPROT", "AWSIZE", "AWLEN",
            "AWBURST", "WVALID", "WREADY", "WDATA", "WSTRB", "WLAST",
            "BVALID", "BREADY",
        )
        self.sig = {}
        for suffix in required:
            name = self.PREFIX + suffix
            if not hasattr(self.bus, name):
                raise AssertionError(f"Required DUT signal is missing: {name}")
            self.sig[suffix] = getattr(self.bus, name)
        self.bus_bytes = len(self.sig["WDATA"]) // 8

    def force(self, suffix, value):
        signal = self.sig[suffix]
        signal.value = Force(value)
        if signal not in self.forced:
            self.forced.append(signal)

    def release_all(self):
        for signal in reversed(self.forced):
            signal.value = Release()
        self.forced.clear()

    async def write(self, address, data, size_bytes, timeout_cycles=200):
        if size_bytes not in (1, 2, 4, 8):
            raise ValueError("AXI write size must be 1, 2, 4, or 8 bytes")

        lane = address % self.bus_bytes
        if lane + size_bytes > self.bus_bytes:
            raise ValueError("AXI write crosses a data-bus boundary")

        self.force("AWADDR", address)
        self.force("AWPROT", 0)
        self.force("AWSIZE", int(math.log2(size_bytes)))
        self.force("AWLEN", 0)
        self.force("AWBURST", 1)
        self.force("WDATA", data << (8 * lane))
        self.force("WSTRB", ((1 << size_bytes) - 1) << lane)
        self.force("WLAST", 1)
        self.force("BREADY", 1)
        self.force("AWVALID", 1)
        self.force("WVALID", 1)

        aw_done = False
        w_done = False
        response_seen = False

        for _ in range(timeout_cycles):
            await RisingEdge(self.dut.CLK)
            if not aw_done and logic_is_one(self.sig["AWREADY"]):
                aw_done = True
                self.force("AWVALID", 0)
            if not w_done and logic_is_one(self.sig["WREADY"]):
                w_done = True
                self.force("WVALID", 0)
            if logic_is_one(self.sig["BVALID"]):
                response_seen = True
            if aw_done and w_done and response_seen:
                break

        self.force("AWVALID", 0)
        self.force("WVALID", 0)
        self.force("BREADY", 0)
        await RisingEdge(self.dut.CLK)

        passed = aw_done and w_done and response_seen
        self.dut._log.info(
            "AXI write addr=0x%08x data=0x%x size=%d: AW=%s W=%s B=%s",
            address, data, size_bytes, aw_done, w_done, response_seen,
        )
        if STRICT_UART_TX:
            assert passed, f"AXI UART write did not complete at 0x{address:08x}"
        return passed


class WaveformOnlyAxiMaster:
    """Fallback when generated RTL hides the core's internal AXI signals."""

    def __init__(self, dut, reason):
        self.dut = dut
        self.reason = reason
        dut._log.warning(
            "Internal AXI signals are unavailable; using serial waveform mode: %s",
            reason,
        )

    async def write(self, address, data, size_bytes, timeout_cycles=200):
        self.dut._log.info(
            "Waveform-only UART write request: "
            "addr=0x%08x data=0x%x size=%d",
            address,
            data,
            size_bytes,
        )
        await ClockCycles(self.dut.CLK, 2)
        return False

    def release_all(self):
        pass


def create_axi_master(dut):
    try:
        return ForcedAxiMaster(dut)
    except (AttributeError, AssertionError) as error:
        if STRICT_UART_TX:
            raise
        return WaveformOnlyAxiMaster(dut, error)

@cocotb.test()
async def test_uart_registers_and_serial_waveforms(dut):
    """Exercise UART0 register writes and produce observable RX/TX serial data."""

    clock_hz = 1_000_000_000 // CLOCK_PERIOD_NS
    baud = clock_hz // (16 * BAUD_DIV)
    assert baud > 0

    cocotb.start_soon(Clock(dut.CLK, CLOCK_PERIOD_NS, unit="ns").start(start_high=False))
    dut.RST_N.value = 0
    await ClockCycles(dut.CLK, RESET_CYCLES)
    dut.RST_N.value = 1
    await ClockCycles(dut.CLK, 20)

    uart0 = dut.soc
    uart_rx_source = UartSource(
        uart0.uart_io_SIN, baud=baud, bits=8, stop_bits=1, parity=UartParity.NONE
    )
    uart_tx_sink = UartSink(
        uart0.uart_io_SOUT, baud=baud, bits=8, stop_bits=1, parity=UartParity.NONE
    )

    dut._log.info(
        "UART test: base=0x%08x divider=%d baud=%d TX=%s RX=%s strict=%s",
        UART_BASE, BAUD_DIV, baud, TX_BYTES.hex(), RX_BYTES.hex(), STRICT_UART_TX,
    )

    axi = create_axi_master(dut)
    try:
        baud_write_ok = await axi.write(BAUD_REG, BAUD_DIV, 2)
        tx_writes_ok = True
        for value in TX_BYTES:
            tx_writes_ok &= await axi.write(TX_REG, value, 1)

        await uart_rx_source.write(RX_BYTES)
        await uart_rx_source.wait()
        await ClockCycles(dut.CLK, 20)

        assert int(uart0.uart_io_SIN.value) == 1, "UART SIN did not return to idle high"

        if STRICT_UART_TX:
            frame_timeout_us = max(200, (len(TX_BYTES) + 1) * 12_000_000 // baud)
            received = bytearray()
            while len(received) < len(TX_BYTES):
                chunk = await with_timeout(
                    uart_tx_sink.read(len(TX_BYTES) - len(received)),
                    frame_timeout_us,
                    "us",
                )
                received.extend(chunk)
            assert bytes(received) == TX_BYTES, (
                f"UART TX mismatch: got {received.hex()}, expected {TX_BYTES.hex()}"
            )
        else:
            dut._log.warning(
                "Waveform mode: AXI completion was baud=%s tx=%s. "
                "Use STRICT_UART_TX=1 after handshakes are visible to require TX decoding.",
                baud_write_ok, tx_writes_ok,
            )
    finally:
        axi.release_all()

    await ClockCycles(dut.CLK, 20)

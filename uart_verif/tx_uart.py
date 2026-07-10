

import os
import random
from pathlib import Path
import datetime
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotbext.axi import AxiMaster, AxiBus, AxiBurstType
from cocotbext.uart import UartSource, UartSink ,UartParity
from cocotb.handle import Force, Release

import logging
import vsc
from enum import Enum, auto
import random
# UartParity = Enum("UartParity", "NONE EVEN ODD MARK SPACE")
# UART Memory Map Base Address

UART0=0x00011300
UART1=0x00011400
UART2=0x00011500
UART_BASE = random.choice([UART0])
# UART_BASE = 0x00011400
print("uart base value:",hex(UART_BASE))



# Register Offsets
BAUD_REG = UART_BASE + 0x00
TX_REG = UART_BASE + 0x04
RX_REG = UART_BASE + 0x08
STATUS_REG = UART_BASE + 0x0C
DELAY_REG = UART_BASE + 0x10
CTRL_REG = UART_BASE + 0x14
INTERRUPT_EN = UART_BASE + 0x18
IQCYC_REG = UART_BASE + 0x1C
RX_THRESH = UART_BASE + 0x20
CLK_EN = UART_BASE + 0x24

def parity_extract(value):
    if value == UartParity.NONE:
        return 0
    elif value == UartParity.ODD:
        return 1
    elif value == UartParity.EVEN:
        return 2

def stop_extract(value):
    if value == 0b00:
        return 1
    elif value == 0b01:
        return 1.5
    elif value == 0b10:
        return 2

@vsc.randobj
class uart_item(object):

    def __init__(self):
        self.data = vsc.rand_bit_t(8)

@vsc.covergroup
class UART(object):
    def __init__(self):
        self.options.auto_bin_max = 65536  # Increase limit
        self.with_sample(
            data=vsc.bit_t(32),
            stop_bits=vsc.bit_t(2),
            parity=vsc.bit_t(2),
            data_width=vsc.bit_t(5),
            uart=vsc.bit_t(32)
        )

        self.UART = vsc.coverpoint(self.uart, bins={
            "UART0": vsc.bin(0x00011300),
            "UART1": vsc.bin(0x00011400),
            "UART2": vsc.bin(0x00011500)
        })

        # self.DATA = vsc.coverpoint(self.data)
        self.DATA_MASTER = vsc.coverpoint(self.data,bins={
            #data for minimum and maximum values
            "data_min": vsc.bin(0b00000000),
            "data_max": vsc.bin(0xffffffff),

            #data for all set of data
            "data_range: 0  to 00ff": vsc.bin( [0,0xff] ),
            "data_range: 00ff to ff00": vsc.bin( [0xff, 0xff00] ),
            "data_range: ff00 to ff_0000": vsc.bin( [0xff00, 0xff0000] ),
            "data_range: ff_0000 to ff00_0000": vsc.bin( [0xff0000, 0xff000000] ),
            "data_range: ff_000000 to ffff_ffff": vsc.bin( [0xff000000, 0xffffffff] ),

            # data for all set of ranges
            "data_range: 0 to ff00": vsc.bin( [0, 0xff00] ),
            "data_range: 0 to ff_0000": vsc.bin( [0, 0xff0000] ),
            "data_range: 0 to ff00_0000": vsc.bin( [0, 0xff000000] ),

            #data for msb and lsb
            "data_msb": vsc.bin(0x80000000),
            "data_lsb": vsc.bin(0x00000001),
        })
        self.Stop_bit = vsc.coverpoint(self.stop_bits, bins={
            "one_stop": vsc.bin(0b00),
            "one_half_stop": vsc.bin(0b01),
            "two_stop": vsc.bin(0b10)
        })


        self.Parity = vsc.coverpoint(self.parity, bins={
            "no_parity": vsc.bin(0b00),
            "odd_parity": vsc.bin(0b01),
            "even_parity": vsc.bin(0b10)
        })

        self.Data_Width = vsc.coverpoint(self.data_width, cp_t=vsc.uint8_t())

class Testbench:
  def __init__(self, dut):
    self.dut = dut
    # self.txrx = uart_item()

    # Calculate the Baud Rate based on the baud_value and clk_freq
    # self.baud_rate = clk_freq // (16 * axi_baud_value)

    self.log = logging.getLogger("cocotb.tb")
    self.log.setLevel(logging.DEBUG)

    bus = AxiBus.from_prefix(dut.soc.soc, 'ccore_0_master_d')

    # Workaround: AxiBus detected signals but failed to attach handles to the bus objects.
    # We manually patch the missing handles from the DUT using the known prefix.
    def patch_bus(bus_obj, prefix):
        for attr in dir(bus_obj):
            if attr.startswith("aw") or attr.startswith("w") or attr.startswith("b") or attr.startswith("ar") or attr.startswith("r"):
                 val = getattr(bus_obj, attr)
                 if val is None:
                     sig_name_upper = f"{prefix}_{attr.upper()}"
                     if hasattr(dut.soc.soc, sig_name_upper):
                         setattr(bus_obj, attr, getattr(dut.soc.soc, sig_name_upper))
                     else:
                         sig_name_lower = f"{prefix}_{attr}"
                         if hasattr(dut.soc.soc, sig_name_lower):
                             setattr(bus_obj, attr, getattr(dut.soc.soc, sig_name_lower))

    patch_bus(bus.write.aw, 'ccore_0_master_d')
    patch_bus(bus.write.w, 'ccore_0_master_d')
    patch_bus(bus.write.b, 'ccore_0_master_d')
    patch_bus(bus.read.ar, 'ccore_0_master_d')
    patch_bus(bus.read.r, 'ccore_0_master_d')

    self.axi_master= AxiMaster(bus, clock=dut.CLK, reset=dut.RST_N, reset_active_level=False)
    # Set up UART Tx (Sink) with the calculated baud rate
    # self.uart_tx = UartSink(dut.soc.uart_cluster.uart0.SOUT, baud=self.baud_rate, bits=8, stop_bits=stop_bit_value, parity=selected_parity)

    # Set up UART Rx (Source) for driving data into the UART
    # self.uart_rx = UartSource(dut.soc.uart_cluster.uart0.SIN, baud=self.baud_rate, bits=8, stop_bits=1)

    self.cg = UART()
class uart_components:
  def __init__(self, dut, clk_freq, axi_baud_value,stop_bit_value,selected_parity,data_width,uart_number):
    self.dut = dut
    self.txrx = uart_item()

    # Calculate the Baud Rate based on the baud_value and clk_freq
    self.baud_rate = clk_freq // (16 * axi_baud_value)
    uart_souts = {
    0x00011300: dut.soc.uart_cluster.uart0.SOUT,
    0x00011400: dut.soc.uart_cluster.uart1.SOUT,
    0x00011500: dut.soc.uart_cluster.uart2.SOUT
    }
    selected_sout = uart_souts[uart_number]
    self.log = logging.getLogger("cocotb.tb")
    self.log.setLevel(logging.DEBUG)

    # self.axi_master= AxiMaster(AxiBus.from_prefix(dut,'ccore_master_d'), clock=dut.CLK, reset=dut.RST_N, reset_active_level=False)
    # Set up UART Tx (Sink) with the calculated baud rate
    self.uart_tx = UartSink(selected_sout, baud=self.baud_rate, bits=data_width, stop_bits=stop_bit_value, parity=selected_parity)

    # Set up UART Rx (Source) for driving data into the UART
    self.uart_rx = UartSource(dut.soc.uart_cluster.uart1.SIN, baud=self.baud_rate, bits=8, stop_bits=1)


@cocotb.test()
async def test_peripherals(dut):
    """Test to verify uart through AXI4 transactions"""
    clock = Clock(dut.CLK, 100, unit="ns")  # Create a 10us period clock on port clk
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))
    dut.RST_N.value = 0
    for i in range(0,400):
        await RisingEdge(dut.CLK)

    dut.RST_N.value = 1
    dut._log.info('Incrementing')
    for i in range(0,10):
        await RisingEdge(dut.CLK)
    dut._log.info('HLOO1')


    # for j in range(1, 3):
    # Set clock frequency and baud value

    for i in range(0,10):
        await RisingEdge(dut.CLK)

    tb = Testbench(dut)
    for _ in range(100):
        await RisingEdge(tb.dut.CLK)
    # await RisingEdge(tb.dut.CLK)




    # await tb.axi_master.write(address=INTERRUPT_EN, data=(0x0).to_bytes(2, 'little'), awid=0x1, burst=AxiBurstType.FIXED, size=1, prot=0)

    # # Wait a few cycles for the write to complete
    # for _ in range(10):
    #     await RisingEdge(tb.dut.CLK)
    # dut._log.info("INTERRUPT_EN register initialized.")

    axi_baud_value = 0x5

    # Initialize Baud Rate Register
    dut.soc.soc.ccore_0_master_d_AWVALID.value = 1
    dut.soc.soc.ccore_0_master_d_AWADDR.value = 0x1000
    dut.soc.soc.ccore_0_master_i_AWADDR.value = 0x2000
    dut.soc.soc.ccore_0_master_d_AWPROT.value = 0x0
    dut.soc.soc.ccore_0_master_d_AWSIZE.value = 0x1
    dut.soc.soc.ccore_0_master_d_AWLEN.value = 0x0
    dut.soc.soc.ccore_0_master_d_AWBURST.value = 0x0

    # Wait a few cycles for the write to complete
    for _ in range(100):
        await RisingEdge(tb.dut.CLK)
    dut._log.info("Baud rate register initialized.")

    dut._log.info(f'{dut.soc.soc.ccore_0_master_d_AWADDR.value}')
    dut._log.info(f'{dut.soc.soc.ccore_0_master_i_AWADDR.value}')

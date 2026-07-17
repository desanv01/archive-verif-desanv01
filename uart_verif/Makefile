.DEFAULT_GOAL := sim
# Cocotb test for the generated SHAKTI C-Class SoC UART.

SIM ?= icarus
WAVES ?= 1
TOPLEVEL_LANG ?= verilog

TOP := mkTbSoc
PWD := $(shell pwd)

export PYTHONPATH := $(PWD):$(PYTHONPATH)

BSC_BIN := $(shell command -v bsc 2>/dev/null)
BSC_LIBDIR := $(shell dirname $(BSC_BIN))/../lib/Verilog
BSC_BRAM := $(BSC_LIBDIR)/BRAM1Load.v

RTL_DIR := $(PWD)/../build/hw/verilog
RTL_SOURCES := $(sort $(wildcard $(RTL_DIR)/*.v) $(wildcard $(RTL_DIR)/*.sv))

VERILOG_SOURCES := $(RTL_SOURCES) $(BSC_BRAM)

COMPILE_ARGS += -g2012
COMPILE_ARGS += -I$(PWD)/verilog
COMPILE_ARGS += -I$(BSC_LIBDIR)
COMPILE_ARGS += -I$(PWD)/../common_verilog

TOPLEVEL := $(TOP)
MODULE := tx_uart

.PHONY: preflight clean_all

preflight:
	@command -v python3 >/dev/null || (echo "ERROR: python3 not found"; exit 1)
	@command -v cocotb-config >/dev/null || (echo "ERROR: cocotb-config not found"; exit 1)
	@command -v iverilog >/dev/null || (echo "ERROR: iverilog not found"; exit 1)
	@test -n "$(BSC_BIN)" || (echo "ERROR: bsc not found"; exit 1)
	@test -f "$(BSC_BRAM)" || (echo "ERROR: BRAM1Load.v not found at $(BSC_BRAM)"; exit 1)
	@test -d "$(RTL_DIR)" || (echo "ERROR: generated RTL directory is missing: $(RTL_DIR)"; exit 1)
	@test -n "$(strip $(RTL_SOURCES))" || (echo "ERROR: no generated .v/.sv files found"; exit 1)
	@grep -RqsE '^[[:space:]]*module[[:space:]]+$(TOP)([[:space:]#;(]|$$)' "$(RTL_DIR)" || \
		(echo "ERROR: top module $(TOP) not found below $(RTL_DIR)"; exit 1)
	@python3 -c "import cocotb; import cocotbext.axi; import cocotbext.uart; print('PASS: Python and cocotb dependencies found')"
	@echo "PASS: found $(words $(RTL_SOURCES)) generated RTL source files"

include $(shell cocotb-config --makefiles)/Makefile.sim

clean_all: clean
	rm -rf results.xml dump.fst dump.vcd uart_run.log sim_build __pycache__

# Cocotb verification for the 128-bit pipelined carry-select adder.

SIM ?= verilator
TOPLEVEL_LANG ?= verilog

PWD := $(shell pwd)
export PYTHONPATH := $(PWD):$(PYTHONPATH)

VERILOG_SOURCES := $(PWD)/adder_pipelined.v
COCOTB_TOPLEVEL := pipelined_128bit_csla
COCOTB_TEST_MODULES := test_adder_pipelined

COMPILE_ARGS += -O3 --x-assign fast --x-initial fast
COMPILE_ARGS += -Wno-WIDTH -Wno-UNOPTFLAT -Wno-TIMESCALEMOD
COMPILE_ARGS += --threads 1

# Verilator waveform and source-code coverage instrumentation.
EXTRA_ARGS += --trace --trace-fst --trace-structs
EXTRA_ARGS += --coverage

include $(shell cocotb-config --makefiles)/Makefile.sim

code_cov_gen:
	@test -f coverage.dat || { echo "Run 'make' first to create coverage.dat"; exit 1; }
	verilator_coverage --write-info coverage.info coverage.dat
	genhtml coverage.info --output-directory coverage

clean_all: clean
	rm -rf cov.xml coverage_*.yml *.fst *.vcd coverage.dat coverage.info coverage
	rm -rf __pycache__ .pytest_cache


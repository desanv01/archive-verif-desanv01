# Cocotb verification for the two-stage 8-bit pipelined multiplier.

SIM ?= verilator
TOPLEVEL_LANG ?= verilog

PWD := $(shell pwd)
export PYTHONPATH := $(PWD):$(PYTHONPATH)

VERILOG_SOURCES := $(PWD)/mult_pipelined.v
COCOTB_TOPLEVEL := mult_pipelined
COCOTB_TEST_MODULES := test_mult_pipelined

COMPILE_ARGS += -O3 --x-assign fast --x-initial fast
COMPILE_ARGS += -Wno-WIDTH -Wno-UNOPTFLAT -Wno-TIMESCALEMOD
COMPILE_ARGS += --threads 1

# Generate dump.fst and Verilator source-code coverage.
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


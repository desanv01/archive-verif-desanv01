# See LICENSE.cocotb for details
# See LICENSE.vyoma for details

SIM ?= verilator
TOPLEVEL_LANG ?= verilog

PWD := $(shell pwd)

# Allow Python to import modules from the current test directory.
export PYTHONPATH := $(PWD):$(PYTHONPATH)

# Verilog source file.
VERILOG_SOURCES := $(PWD)/multiplier_64.v

# Must match: module multiplier_64x64 (...) in multiplier_64.v.
COCOTB_TOPLEVEL := multiplier_64x64

# Python testbench filename without the .py extension.
COCOTB_TEST_MODULES := test_multiplier_64

# Verilator compilation settings.
COMPILE_ARGS += -O3
COMPILE_ARGS += --x-assign fast
COMPILE_ARGS += --x-initial fast
COMPILE_ARGS += -Wno-WIDTH
COMPILE_ARGS += -Wno-UNOPTFLAT
COMPILE_ARGS += -Wno-TIMESCALEMOD
COMPILE_ARGS += --autoflush
COMPILE_ARGS += --threads 1

# FST waveform generation.
EXTRA_ARGS += --trace
EXTRA_ARGS += --trace-fst
EXTRA_ARGS += --trace-structs

# Verilator code coverage.
EXTRA_ARGS += --coverage

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: code_cov_gen clean_all check_outputs

code_cov_gen:
	rm -f cov.xml coverage.dat coverage.info
	rm -rf coverage
	$(MAKE) sim
	test -s cov.xml
	test -s coverage.dat
	verilator_coverage --write-info coverage.info coverage.dat
	genhtml coverage.info --output-directory coverage
	@echo "Functional coverage: cov.xml"
	@echo "Code coverage: coverage/index.html"

check_outputs:
	test -s results.xml
	test -s dump.fst
	test -s coverage.dat
	@echo "Simulation, waveform and coverage files are present."

clean_all: clean
	rm -rf results.xml *.xml coverage_*.yml
	rm -rf *.fst *.vcd
	rm -rf coverage.dat coverage.info coverage
	rm -rf __pycache__ sim_build

# Cocotb/Verilator build for multiplier64_tree.v

SIM ?= verilator
TOPLEVEL_LANG ?= verilog

PWD := $(shell pwd)

export PYTHONPATH := $(PWD):$(PYTHONPATH)

VERILOG_SOURCES := $(PWD)/multiplier64_tree.v
COCOTB_TOPLEVEL := multiplier
COCOTB_TEST_MODULES := test_multiplier64_tree

COMPILE_ARGS += -O3
COMPILE_ARGS += --x-assign fast
COMPILE_ARGS += --x-initial fast
COMPILE_ARGS += -Wno-DECLFILENAME
COMPILE_ARGS += -Wno-UNUSEDSIGNAL
COMPILE_ARGS += -Wno-UNOPTFLAT
COMPILE_ARGS += -Wno-WIDTH
COMPILE_ARGS += -Wno-TIMESCALEMOD
COMPILE_ARGS += --autoflush
COMPILE_ARGS += --threads 1

EXTRA_ARGS += --trace
EXTRA_ARGS += --trace-fst
EXTRA_ARGS += --trace-structs
EXTRA_ARGS += --coverage

include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: code_cov_gen clean_all

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

clean_all: clean
	rm -rf results.xml *.xml coverage_*.yml
	rm -rf *.fst *.vcd
	rm -rf coverage.dat coverage.info coverage
	rm -rf __pycache__ sim_build

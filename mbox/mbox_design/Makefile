#
# see LICENSE.iitm
# Details:
#   Makefile for mbox: integer multiplier and divider
#   Using open bluespec. Assumes open_bsc/bin/bsc is in the PATH.
# --------------------------------------------------------------------------------------------------

include Makefile.inc

TOP_MODULE:=mk_tb_int_multiplier
TOP_FILE:=tb_int_multiplier.bsv
TOP_DIR:=./testbench

BSVBUILDDIR:=./build/
VERILOGDIR:=./verilog/
BSVOUTDIR:=./bin
BSVINCDIR:= .:%/Libraries:baseline_multiplier:pipelined_multiplier:non_restoring_divider:srt_radix2_divider:srt_radix4_divider:$(PATH_DIV):$(PATH_MUL):$(DIR):$(BSVBUILDDIR)/common_bsv
define_macros:=-D ASSERT=True -D RV64=True

# open bsc changes
BSC_DIR := $(shell which bsc)
BSC_VDIR:=$(subst /bin/bsc,/,${BSC_DIR})bin/../lib/Verilog
BSC_VIVADODIR:=$(subst /bin/bsc,/,${BSC_DIR})bin/../lib/Verilog.Vivado

## BFM_V_DIR:=
VERILATOR_FLAGS = --stats -O3 -CFLAGS -O3 -LDFLAGS -static --x-assign fast --x-initial fast \
					--no-assert --exe sim_main.cpp -Wno-STMTDLY -Wno-UNOPTFLAT \
					-Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY

## VERILATOR__RBB_VPI_FLAGS

## BFM_V_DIR:=
VERILATOR_FLAGS = --stats -O3 -CFLAGS -O3 -LDFLAGS -static --x-assign fast --x-initial fast \
					--no-assert --exe sim_main.cpp -Wno-STMTDLY -Wno-UNOPTFLAT \
					-Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY

## VERILATOR__RBB_VPI_FLAGS

default: full_clean generate_verilog

.PHONY: compile
compile:
	@echo Compiling $(TOP_MODULE)....
	@mkdir -p $(BSVBUILDDIR)
	@$(shell if [ ! -d $(BSVBUILDDIR)/common_bsv ]; then git clone --recursive https://gitlab.com/shaktiproject/common_bsv.git $(BSVBUILDDIR)/common_bsv; fi)
	@bsc -show-range-conflict -u -sim -simdir $(BSVBUILDDIR) -bdir $(BSVBUILDDIR) -info-dir $(BSVBUILDDIR) -keep-fires\
 -check-assert $(define_macros) -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE)
	@echo Compilation finished

.PHONY: module_only
module_only:
	@make TOP_FILE=riscvDebug013.bsv TOP_DIR=riscvDebug013 TOP_MODULE:=mkriscvDebug013

.PHONY: link_bsim
link_bsim:
	@echo Linking $(TOP_MODULE)...
	@mkdir -p bin
	@bsc -e $(TOP_MODULE) -sim -o ./bin/out -simdir $(BSVBUILDDIR) -p $(BSVINCDIR) -bdir $(BSVBUILDDIR) -keep-fires
	@echo Linking finished

.PHONY: link_verilator
link_verilator:
	@echo "Linking $(TOP_MODULE) using verilator"
	@mkdir -p bin
	@echo "#define TOPMODULE V$(TOP_MODULE)" > testbench/sim_main.h
	@echo '#include "V$(TOP_MODULE).h"' >> testbench/sim_main.h
	@verilator --cc $(TOP_MODULE).v $(VERILATOR_FLAGS) -y $(VERILOGDIR)
	@ln -f -s ../testbench/sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../testbench/sim_main.h obj_dir/sim_main.h
	@make -j4 -C obj_dir -f V$(TOP_MODULE).mk
	@cp obj_dir/V$(TOP_MODULE) bin/out
	@echo Linking finished

.PHONY: link_verilator_svdpi
link_verilator_svdpi:
	@echo "Linking Verilator With the Shakti RBB Vpi"
	@mkdir -p bin
	@echo "#define TOPMODULE V$(TOP_MODULE)_edited" > testbench/sim_main.h
	@echo '#include "V$(TOP_MODULE)_edited.h"' >> testbench/sim_main.h
	@sed  -f jtagdtm/sed_script.txt  $(VERILOGDIR)/$(TOP_MODULE).v > tmp1.v
	@cat  jtagdtm/verilator_config.vlt \
	      jtagdtm/vpi_sv.v \
	      tmp1.v                         > $(VERILOGDIR)/$(TOP_MODULE)_edited.v
	@rm   -f  tmp1.v
	@verilator --threads-dpi none --cc $(TOP_MODULE)_edited.v --exe sim_main.cpp RBB_Shakti.c -y $(VERILOGDIR) $(VERILATOR_FLAGS)
	@ln -f -s ../testbench/sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../testbench/sim_main.h obj_dir/sim_main.h
	@ln -f -s ../jtagdtm/RBB_Shakti.c obj_dir/RBB_Shakti.c
	@echo "INFO: Linking verilated files"
	@make -j4 -C obj_dir -f V$(TOP_MODULE)_edited.mk
	@cp obj_dir/V$(TOP_MODULE)_edited bin/out
	@echo Linking finished

.PHONY: generate_verilog
generate_verilog:
	@echo Compiling $(TOP_MODULE) in verilog ...
	@mkdir -p $(BSVBUILDDIR);
	@mkdir -p $(VERILOGDIR);
	@$(shell if [ ! -d $(BSVBUILDDIR)/common_bsv ]; then git clone --recursive https://gitlab.com/shaktiproject/common_bsv.git $(BSVBUILDDIR)/common_bsv; fi)
	@bsc -show-range-conflict -steps 1000000000 -u -remove-dollar +RTS -K4000M -RTS -verilog -elab -vdir $(VERILOGDIR) -bdir $(BSVBUILDDIR) -info-dir $(BSVBUILDDIR)\
  -keep-fires -check-assert  $(define_macros) -D VERBOSITY=0 -D verilog=True $(BSVCOMPILEOPTS)\
  -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE)  || (echo "BSC COMPILE ERROR"; exit 1)
	@cp ${BSC_VDIR}/ResetEither.v ./verilog/
	@cp ${BSC_VDIR}/FIFO2.v ./verilog/
	@cp ${BSC_VDIR}/FIFO20.v ./verilog/
	@cp ${BSC_VDIR}/MakeReset0.v ./verilog/
	@cp ${BSC_VIVADODIR}/BRAM2BELoad.v ./verilog/
	@cp ${BSC_VDIR}/ClockInverter.v ./verilog/
	@cp ${BSC_VDIR}/SyncReset0.v ./verilog/
	@cp ${BSC_VDIR}/MakeClock.v ./verilog/
	@cp ${BSC_VDIR}/FIFO1.v ./verilog/
	@cp ${BSC_VDIR}/FIFO10.v ./verilog/
	@cp ${BSC_VDIR}/SyncFIFO1.v ./verilog/
	@cp ${BSC_VDIR}/ConstrainedRandom.v ./verilog/

.PHONY: simulate
simulate: ## Simulate the 'out' executable
	@echo Simulation...
	@exec ./$(BSVOUTDIR)/out +fullverbose
	@echo Simulation finished

.PHONY: clean
clean:
	rm -rf build bin *.jou *.log

.PHONY: full_clean
full_clean: clean
	rm -rf verilog fpga

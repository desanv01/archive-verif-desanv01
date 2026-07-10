SIM ?= icarus
TOPLEVEL_LANG ?= verilog

export TOP=mkTbSoc

#COMPILE_ARGS += -O3 --x-assign fast --x-initial fast --no-timing \
                            --x-assign fast --x-initial fast --noassert \
                            --bbox-sys -Wno-STMTDLY -Wno-SYMRSVDWORD -Wno-UNOPTFLAT \
                            -Wno-WIDTH -Wno-lint -Wno-COMBDLY \
                            -Wno-INITIALDLY --autoflush  --threads 1 \
                            -DBSV_RESET_FIFO_HEAD -DBSV_RESET_FIFO_ARRAY \
                            --output-split 20000 --output-split-ctrace 10000  \
                            --vpi --public-flat-rw --prefix ${TOP} -I${PWD}/verilog

COMPILE_ARGS += -I ${PWD}/verilog -I /tools/bsc_build/bsc-2023.07-ubuntu-22.04/lib/Verilog/ -I ${PWD}/../common_verilog

PWD=$(shell pwd)

export PYTHONPATH:=$(PWD):$(PYTHONPATH)

VERILOG_SOURCES=$(PWD)/../build/hw/verilog/*.v*

VERILOG_SOURCES += $(shell which bsc | xargs dirname)/../lib/Verilog/BRAM1Load.v

TOPLEVEL = ${TOP}
MODULE   := tx_uart

include $(shell cocotb-config --makefiles)/Makefile.sim

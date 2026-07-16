# 128-bit Pipelined Carry-Select Adder Verification

This folder verifies the supplied `pipelined_128bit_csla` RTL without changing
the design. The cocotb scoreboard accounts for its four-edge latency and checks
back-to-back additions at one input per clock.

## Files

- `adder_pipelined.v`: supplied Verilog RTL, unchanged
- `test_adder_pipelined.py`: directed, random, pipeline, and PyVSC coverage test
- `Makefile`: Verilator/cocotb build, FST waveform, and code coverage
- `requirements.txt`: Python dependencies for a new environment

## Run

```bash
cd ~/verif-desanv01/128bit_adder
make clean_all
make
```

A successful run creates `results.xml`, `dump.fst`, `coverage.dat`, and
`cov.xml`. The terminal ends with a cocotb PASS summary.

Generate the Verilator HTML code-coverage report after simulation:

```bash
make code_cov_gen
```

Open `dump.fst` with Surfer for waveforms, `cov.xml` with the Functional
Coverage Viewer, and `coverage/index.html` for Verilator code coverage.


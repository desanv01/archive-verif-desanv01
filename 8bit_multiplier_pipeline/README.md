# 8-bit Two-Stage Pipelined Multiplier Verification

This package verifies the supplied `mult_pipelined` RTL with cocotb,
Verilator, and PyVSC. The RTL is unchanged.

The testbench implements the whiteboard flow:

1. Input sequence/driver
2. Unsigned `A * B` reference model
3. Two-stage valid-aware scoreboard
4. Directed corner and bubble tests
5. Exhaustive `0..255 x 0..255` testing (65,536 combinations)
6. Functional coverage written to `cov.xml`

The first three transactions reproduce the timing diagram:

- `0x05 x 0x1B = 0x0087`
- `0xFF x 0xFF = 0xFE01`
- `0x10 x 0x10 = 0x0100`

## Run

```bash
cd ~/verif-desanv01/8bit_multiplier_pipeline
make clean_all
make 2>&1 | tee run.log
```

Successful simulation produces `results.xml`, `dump.fst`, `coverage.dat`, and
`cov.xml`. Generate the Verilator HTML report with `make code_cov_gen`.

Open `dump.fst` with Surfer, `cov.xml` with Functional Coverage Viewer, and
`coverage/index.html` for Verilator source-code coverage.


# To generate verilog files

```
cd mbox_design
make generate_verilog TOP_MODULE=mk_non_restoring_divider TOP_DIR=non_restoring_divider TOP_FILE=non_restoring_divider.bsv
```

# To Run the test
```
cd mbox_verif
make TOP_MODULE=mk_non_restoring_divider  COUNT=10 WAVES=1
```


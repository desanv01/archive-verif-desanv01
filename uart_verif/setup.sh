git clone https://gitlab.com/shaktiproject/cores/c-class.git
cd c-class
pip install -r requirements.txt
repomanager --yaml $PWD/test_soc/c64_c32/c64_deps.yaml --clean &> /dev/null
repomanager --yaml $PWD/test_soc/c64_c32/c64_deps.yaml -cup &> /dev/null
soc_config  -ispec sample_config/c64/rv64i_isa.yaml   -customspec sample_config/c64/rv64i_custom.yaml   -cspec sample_config/c64/core64.yaml   -gspec sample_config/c64/csr_grouping64.yaml   -dspec sample_config/c64/rv64i_debug.yaml   --verbose info
make generate_verilog
make link_verilator
export XXD_VERSION=2023
make generate_boot_files
make test opts='--test=add --suite=rv64ui --debug' CONFIG_ISA=RV64IMAFDCZicsr_Zifencei
make regress opts='--filter=rv64um --test_opts="--timeout=120s" --sub' CONFIG_ISA=RV64IMAFDCZicsr_Zifencei

cp uart_verif c-class
cd c-class/uart_verif
pip install -r requirements.txt
make WAVES=1

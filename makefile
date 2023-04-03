#*******************************************************************************
# Creator:        Hai Cao Xuan (caoxuanhaipr@gmail.com)
# Description:    makefile
#*******************************************************************************
# Copyright (c) 2022 Hai Cao Xuan
#*******************************************************************************

FILES := $(shell cat filelist)

VERILATOR = verilator
VERILATOR_COV = verilator_coverage

### LINT FLAGS
LINT_FLAGS = -Wall --lint-only -sv

### VERILATE FLAGS
# Generate C++ in executable form
VERILATOR_FLAGS += -sv -cc
# Optimize
VERILATOR_FLAGS += -x-initial unique
VERILATOR_FLAGS += -x-assign unique
VERILATOR_FLAGS += -O3 -CFLAGS -DCOVERAGE
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Enable assertion
VERILATOR_FLAGS += --assert
# Make waveforms
VERILATOR_FLAGS += --trace-fst
VERILATOR_FLAGS += --build -j

# Input files for Verilator
VERILATOR_INPUT = $(FILES) ./bin/top.sv --top-module top

.PHONY: all
all:
	make test

.PHONY: help
help:
	@echo -e "make [option]"
	@echo -e "\tbuild   verilate and build modules"
	@echo -e "\ttest    run simulation"
	@echo -e "\twave    open waveforms"
	@echo -e "\tclean   clean the working folder"
	@echo -e "\thelp    print this help"

.PHONY: build
build: ./obj_dir/Vtop
./obj_dir/Vtop: $(FILES) ./bin/tb_top.cpp ./bin/top.sv
	@$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT) --exe ./bin/tb_top.cpp > build.log

.PHONY: test
test: ./obj_dir/Vtop
	@./obj_dir/Vtop

.PHONY: wave
wave: wave.fst
	@gtkwave wave.fst

.PHONY: clean
clean:
	@rm -rf obj_dir
	@rm -f wave.fs*
	@rm -f *.log

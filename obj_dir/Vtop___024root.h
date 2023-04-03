// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        CData/*0:0*/ top__DOT__singleCycle__DOT__br_sel;
        CData/*0:0*/ top__DOT__singleCycle__DOT__rd_wren;
        CData/*0:0*/ top__DOT__singleCycle__DOT__br_less;
        CData/*0:0*/ top__DOT__singleCycle__DOT__br_equal;
        CData/*0:0*/ top__DOT__singleCycle__DOT__br_unsigned;
        CData/*0:0*/ top__DOT__singleCycle__DOT__op_a_sel;
        CData/*0:0*/ top__DOT__singleCycle__DOT__op_b_sel;
        CData/*0:0*/ top__DOT__singleCycle__DOT__mem_wren;
        CData/*1:0*/ top__DOT__singleCycle__DOT__wb_sel;
        CData/*2:0*/ top__DOT__singleCycle__DOT__mem_op;
        CData/*3:0*/ top__DOT__singleCycle__DOT__alu_op;
        CData/*0:0*/ top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
        CData/*0:0*/ top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
        CData/*0:0*/ top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__1;
        CData/*0:0*/ top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__0;
        CData/*3:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96ff575f__0;
        CData/*0:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_data_m;
        CData/*0:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_OP_m;
        CData/*0:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_IP_m;
        CData/*3:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        VL_IN(io_sw_i,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__2;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__1;
        IData/*31:0*/ top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__0;
        IData/*31:0*/ top__DOT__singleCycle__DOT__imm;
        IData/*31:0*/ top__DOT__singleCycle__DOT__rs1_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__rs2_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__next_pc;
        IData/*31:0*/ top__DOT__singleCycle__DOT__pc;
        IData/*31:0*/ top__DOT__singleCycle__DOT__instr;
        IData/*31:0*/ top__DOT__singleCycle__DOT__alu_data;
        IData/*31:0*/ top__DOT__singleCycle__DOT__operand_a;
        IData/*31:0*/ top__DOT__singleCycle__DOT__operand_b;
        IData/*31:0*/ top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__6;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__5;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__4;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__3;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__2;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__1;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__0;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m;
        IData/*31:0*/ top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m;
        VlUnpacked<IData/*31:0*/, 4096> top__DOT__singleCycle__DOT__instruction_memory__DOT__memory_cell;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__singleCycle__DOT__register_file__DOT__memory_cell;
        VlUnpacked<IData/*31:0*/, 256> top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 64> top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

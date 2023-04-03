// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+68,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+68,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+34,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+36,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+38,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+40,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+42,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+43,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("arithmetic_logic_unit ");
    tracep->declBus(c+54,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+53,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_comparison ");
    tracep->declBus(c+46,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"br_equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+52,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+36,"br_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"br_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+43,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+44,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immediate_generator ");
    tracep->declBus(c+52,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction_memory ");
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("load_store_unit ");
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+43,"sel_by_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+53,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+57,"sel_data_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"sel_OP_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"sel_IP_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+60,"num_bytes",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,"tmp_data_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,"tmp_OP_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,"tmp_IP_m",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,"tmp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,"IP_memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file ");
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+66,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+48,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"memory_cell",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[31]),32);
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__br_sel));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__rd_wren));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__br_less));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__br_equal));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__br_unsigned));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__mem_wren));
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__wb_sel),2);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__mem_op),3);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__alu_op),4);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
    bufp->fullIData(oldp+48,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                               ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                   ? vlSelf->top__DOT__singleCycle__DOT__imm
                                   : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc))
                               : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                   ? ((1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren)) 
                                             & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op) 
                                                   >> 2U))))
                                       ? ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op))
                                           ? ((((0x80U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data)
                                                 ? 0xffffffU
                                                 : 0U) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data))
                                           : ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op))
                                               ? ((
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data))
                                               : vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data))
                                       : vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data)
                                   : vlSelf->top__DOT__singleCycle__DOT__alu_data))),32);
    bufp->fullIData(oldp+49,(((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                               ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                                   ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                                   : vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__0)
                               : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc))),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__pc),32);
    bufp->fullIData(oldp+51,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc)),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
    bufp->fullIData(oldp+56,(((1U & ((~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren)) 
                                     & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op) 
                                           >> 2U))))
                               ? ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op))
                                   ? ((((0x80U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data)
                                         ? 0xffffffU
                                         : 0U) << 8U) 
                                      | (0xffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data))
                                   : ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op))
                                       ? ((((0x8000U 
                                             & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data)
                                             ? 0xffffU
                                             : 0U) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data))
                                       : vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data))
                               : vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data)),32);
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_data_m));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_OP_m));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_IP_m));
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes),4);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data),32);
    bufp->fullCData(oldp+65,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+68,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+69,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+70,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+71,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+72,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+73,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+74,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+75,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+76,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+77,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+78,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+79,(vlSelf->io_hex7_o),32);
    bufp->fullBit(oldp+80,(vlSelf->clk_i));
    bufp->fullBit(oldp+81,(vlSelf->rst_ni));
}

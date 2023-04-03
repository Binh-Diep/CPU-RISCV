// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h2b17369e__0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__6 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__5 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__4 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__3 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__2 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__1 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__0 
        = (1U & VL_RAND_RESET_I(1));
    __Vilp = 0U;
    while ((__Vilp <= 0xffU)) {
        vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory = 0U;
    vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96ff575f__0 
        = (0xfU & VL_RAND_RESET_I(4));
    vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__2 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__1 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[1U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[2U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[3U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[4U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[5U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[6U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[7U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[8U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[9U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0xaU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0xbU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0xcU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0xdU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0xeU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0xfU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x10U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x11U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x12U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x13U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x14U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x15U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x16U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x17U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x18U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x19U] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x1aU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x1bU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x1cU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x1dU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x1eU] = 0U;
    vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[0x1fU] = 0U;
    __Vtemp_h2b17369e__0[0U] = 0x2e73696dU;
    __Vtemp_h2b17369e__0[1U] = 0x64617461U;
    __Vtemp_h2b17369e__0[2U] = 0x6d656d2eU;
    __Vtemp_h2b17369e__0[3U] = 0x696e7374U;
    __Vtemp_h2b17369e__0[4U] = 0x6f72792fU;
    __Vtemp_h2b17369e__0[5U] = 0x2f6d656dU;
    __Vtemp_h2b17369e__0[6U] = 0x2eU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h2b17369e__0)
                 ,  &(vlSelf->top__DOT__singleCycle__DOT__instruction_memory__DOT__memory_cell)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->io_hex6_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0x18U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0x1cU];
    vlSelf->io_ledr_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0x20U];
    vlSelf->io_lcd_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0x28U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0x14U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0x24U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0x10U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0xcU];
    vlSelf->io_hex2_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [8U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [4U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
        [0U];
    vlSelf->top__DOT__singleCycle__DOT__instr = vlSelf->top__DOT__singleCycle__DOT__instruction_memory__DOT__memory_cell
        [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                    >> 2U))];
    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
    vlSelf->top__DOT__singleCycle__DOT__rd_wren = 0U;
    vlSelf->top__DOT__singleCycle__DOT__br_unsigned 
        = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__0;
    vlSelf->top__DOT__singleCycle__DOT__mem_wren = 0U;
    vlSelf->top__DOT__singleCycle__DOT__mem_op = 2U;
    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                  >> 6U)))) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__mem_op 
                            = (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     >> 0xcU));
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__mem_op 
                        = (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                 >> 0xcU));
                }
            }
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
    vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 0U;
    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 0U;
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = 
        vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0xfU))];
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = 
        vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0x14U))];
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__wb_sel = 2U;
                        vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
                        vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 1U;
                    }
                } else {
                    if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__wb_sel = 2U;
                        vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
                    }
                    vlSelf->top__DOT__singleCycle__DOT__op_a_sel 
                        = (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 2U)));
                }
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__br_unsigned 
                            = ((6U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                             >> 0xcU))) 
                               | (7U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                               >> 0xcU))));
                    }
                }
            }
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
            } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                    = (1U & ((vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2)));
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                        = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
                }
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__rd_wren = 1U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
            vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
        }
    } else if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel 
                    = ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? 3U : 0U);
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__alu_op 
                        = ((8U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 0x1bU)) | (7U 
                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                   >> 0xcU)));
                }
                vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 0U;
            }
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 3U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2)));
            if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
            }
        } else {
            if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3));
            } else {
                if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                        = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
                }
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                 >> 2U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3)));
            }
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
                    vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 0U;
                }
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                      >> 3U)))) {
            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singleCycle__DOT__alu_op 
                = ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                    ? 0U : ((0x18U & ((((1U == (7U 
                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                   >> 0xcU))) 
                                        | (5U == (7U 
                                                  & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                     >> 0xcU)))) 
                                       << 3U) & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                 >> 0x1bU))) 
                            | (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     >> 0xcU))));
            vlSelf->top__DOT__singleCycle__DOT__op_a_sel 
                = (1U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                         >> 2U));
        }
        vlSelf->top__DOT__singleCycle__DOT__rd_wren 
            = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                         >> 3U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2)));
        if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
        }
    } else {
        if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 2U)))) {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 1U;
                vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
                vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 0U;
            }
        }
        if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2));
            vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
        } else {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 2U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2)));
            if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
            }
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__operand_a = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_a_sel)
          ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_a_sel)
              ? vlSelf->top__DOT__singleCycle__DOT__pc
              : vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__1)
          : vlSelf->top__DOT__singleCycle__DOT__rs1_data);
    vlSelf->top__DOT__singleCycle__DOT__br_equal = 
        (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
         == vlSelf->top__DOT__singleCycle__DOT__rs2_data);
    vlSelf->top__DOT__singleCycle__DOT__br_less = ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_unsigned)
                                                    ? 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                                    < vlSelf->top__DOT__singleCycle__DOT__rs2_data)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->top__DOT__singleCycle__DOT__rs1_data, vlSelf->top__DOT__singleCycle__DOT__rs2_data));
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
                }
            }
            vlSelf->top__DOT__singleCycle__DOT__imm 
                = ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)
                    ? vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0
                    : ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                >> 0x1fU) ? (0xffe00000U 
                                             | ((0x100000U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr) 
                                                   | ((0x800U 
                                                       & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                            >> 0x14U))))))
                                : ((0x100000U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                 >> 0xbU)) 
                                   | ((0xff000U & vlSelf->top__DOT__singleCycle__DOT__instr) 
                                      | ((0x800U & 
                                          (vlSelf->top__DOT__singleCycle__DOT__instr 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                               >> 0x14U))))))
                            : vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0)
                        : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                >> 0x1fU) ? (0xfffff000U 
                                             | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0x14U))
                                : (vlSelf->top__DOT__singleCycle__DOT__instr 
                                   >> 0x14U)) : ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                                  >> 0x1fU)
                                                  ? 
                                                 (0xffffe000U 
                                                  | ((0x1000U 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                 >> 7U))))))
                                                  : 
                                                 ((0x1000U 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                              >> 7U)))))))));
        } else {
            vlSelf->top__DOT__singleCycle__DOT__imm 
                = vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0;
        }
    } else if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 0U;
            }
            vlSelf->top__DOT__singleCycle__DOT__imm 
                = ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                    ? vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0
                    : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? (0xfffff000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        : vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0));
        } else {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
                }
            }
            vlSelf->top__DOT__singleCycle__DOT__imm 
                = ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                    ? vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0
                    : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0
                        : ((vlSelf->top__DOT__singleCycle__DOT__instr 
                            >> 0x1fU) ? (0xfffff000U 
                                         | ((0xfe0U 
                                             & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                  >> 7U))))
                            : ((0xfe0U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                           >> 7U))))));
        }
    } else if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                      >> 3U)))) {
            vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
        }
        vlSelf->top__DOT__singleCycle__DOT__imm = (
                                                   (8U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     : 
                                                    (((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                           >> 0xcU))) 
                                                      | (5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                             >> 0xcU))))
                                                      ? 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                         >> 0x14U))
                                                      : 
                                                     ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                                       >> 0x1fU)
                                                       ? 
                                                      (0xfffff000U 
                                                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x14U))
                                                       : 
                                                      (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                       >> 0x14U)))));
    } else {
        if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 2U)))) {
                vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
            }
        }
        vlSelf->top__DOT__singleCycle__DOT__imm = (
                                                   (8U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0
                                                     : 
                                                    ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xfffff000U 
                                                      | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0x14U))));
    }
    vlSelf->top__DOT__singleCycle__DOT__operand_b = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_b_sel)
          ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_b_sel)
              ? vlSelf->top__DOT__singleCycle__DOT__imm
              : vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__2)
          : vlSelf->top__DOT__singleCycle__DOT__rs2_data);
    vlSelf->top__DOT__singleCycle__DOT__br_sel = 0U;
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__br_sel = 1U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__br_sel 
                        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U) | ((0x4000U 
                                             & vlSelf->top__DOT__singleCycle__DOT__instr)
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                  | (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less)))
                                                  : (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal) 
                                                  | (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less)))
                                                  : (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less)))
                                             : ((0x2000U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                 ? (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__1)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal))
                                                  : (IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal))))));
                }
            }
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__alu_data = 
        ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
          ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
              ? ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? 0U : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                           ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__singleCycle__DOT__operand_a, 
                                            (0x1fU 
                                             & vlSelf->top__DOT__singleCycle__DOT__operand_b))
                           : 0U)) : ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                                      ? 0U : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                                               ? 0U
                                               : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                  - vlSelf->top__DOT__singleCycle__DOT__operand_b))))
          : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
              ? ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         | vlSelf->top__DOT__singleCycle__DOT__operand_b))
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)))
              : ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         < vlSelf->top__DOT__singleCycle__DOT__operand_b)
                      : VL_LTS_III(32, vlSelf->top__DOT__singleCycle__DOT__operand_a, vlSelf->top__DOT__singleCycle__DOT__operand_b))
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         << (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         + vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
    vlSelf->top__DOT__singleCycle__DOT__next_pc = ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                                                     : vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__0)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__singleCycle__DOT__pc));
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_IP_m 
        = (IData)((0x500U == (0x700U & vlSelf->top__DOT__singleCycle__DOT__alu_data)));
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_data_m 
        = (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                    >> 0xaU)));
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_OP_m 
        = (IData)((0x400U == (0x700U & vlSelf->top__DOT__singleCycle__DOT__alu_data)));
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes 
        = ((0U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op)))
            ? ((0U == (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                ? 1U : ((1U == (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                         ? 2U : ((2U == (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                  ? 4U : 8U))) : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op)))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                     ? 3U
                                                     : 0xcU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op)))
                                                    ? 0xfU
                                                    : (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96ff575f__0))));
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_IP_m) 
            & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren)))
            ? ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))
                ? ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory))
                : ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))
                    ? ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m) 
                       | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory 
                                   >> 8U))) : ((4U 
                                                == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))
                                                ? (
                                                   (0xffffff00U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m) 
                                                   | (0xffU 
                                                      & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory 
                                                         >> 0x10U)))
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m) 
                                                    | (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory 
                                                       >> 0x18U))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m) 
                                                     | (0xffffU 
                                                        & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))
                                                      ? 
                                                     ((0xffff0000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m) 
                                                      | (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory 
                                                         >> 0x10U))
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))
                                                       ? vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory
                                                       : vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__4)))))))
            : vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__5);
    if (((IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_data_m) 
         & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren)))) {
        if ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        } else if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                               [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 8U)));
        } else if ((4U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                               [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
        } else if ((8U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x18U));
        } else if ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffff00ffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        } else if ((0xcU == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                               [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffff00ffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xff00U & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                                 [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                            >> 2U))] 
                                 >> 0x10U)));
        } else if ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffff00ffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xff00ffffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xff0000U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = ((0xffffffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m) 
                   | (0xff000000U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        } else {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
                = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__0;
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m 
            = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__1;
    }
    if (((IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_OP_m) 
         & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren)))) {
        if ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        } else if ((2U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                               [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 8U)));
        } else if ((4U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                               [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
        } else if ((8U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x18U));
        } else if ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffff00ffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        } else if ((0xcU == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                               [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffff00ffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xff00U & (vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                                 [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                            >> 2U))] 
                                 >> 0x10U)));
        } else if ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes))) {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffff00ffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xff00U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xff00ffffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xff0000U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = ((0xffffffU & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m) 
                   | (0xff000000U & vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        } else {
            vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
                = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__2;
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m 
            = vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__3;
    }
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data 
        = ((IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_data_m)
            ? vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m
            : ((IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_OP_m)
                ? vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m
                : ((IData)(vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_IP_m)
                    ? vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m
                    : vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__6)));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__br_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__br_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__br_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__br_unsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__mem_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__singleCycle__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__instruction_memory__DOT__memory_cell[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__register_file__DOT__memory_cell[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__immediate_generator__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT____Vxrand_h96ff575f__0 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_data_m = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_OP_m = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__sel_IP_m = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__num_bytes = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_data_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_OP_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_IP_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__tmp_ld_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__OP_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__load_store_unit__DOT__IP_memory = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

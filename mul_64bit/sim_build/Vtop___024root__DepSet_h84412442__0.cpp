// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.multiplier_64x64__DOT__clk = vlSelfRef.clk;
    vlSelfRef.multiplier_64x64__DOT__reset = vlSelfRef.reset;
    vlSelfRef.multiplier_64x64__DOT__start = vlSelfRef.start;
    vlSelfRef.multiplier_64x64__DOT__multiplicand_in 
        = vlSelfRef.multiplicand_in;
    vlSelfRef.multiplier_64x64__DOT__multiplier_in 
        = vlSelfRef.multiplier_in;
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__clk 
            = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.reset) ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__reset 
            = vlSelfRef.reset;
    }
    if (((IData)(vlSelfRef.start) ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__start))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__start 
            = vlSelfRef.start;
    }
    if (((IData)(vlSelfRef.multiplier_64x64__DOT__busy) 
         ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__busy))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__busy 
            = vlSelfRef.multiplier_64x64__DOT__busy;
    }
    if (((IData)(vlSelfRef.multiplier_64x64__DOT__done) 
         ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__done 
            = vlSelfRef.multiplier_64x64__DOT__done;
    }
    vlSelfRef.product[0U] = vlSelfRef.multiplier_64x64__DOT__product[0U];
    vlSelfRef.product[1U] = vlSelfRef.multiplier_64x64__DOT__product[1U];
    vlSelfRef.product[2U] = vlSelfRef.multiplier_64x64__DOT__product[2U];
    vlSelfRef.product[3U] = vlSelfRef.multiplier_64x64__DOT__product[3U];
    vlSelfRef.busy = vlSelfRef.multiplier_64x64__DOT__busy;
    vlSelfRef.done = vlSelfRef.multiplier_64x64__DOT__done;
    if ((1U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x7eU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((2U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x7dU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((4U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x7bU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((8U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x77U & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
                  ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x6fU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (0x10U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
                  ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x5fU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (0x20U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((0x40U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
                  ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x3fU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (0x40U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((1U & ((IData)(vlSelfRef.multiplicand_in) ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffffffeULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.multiplicand_in)))));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 1U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffffffdULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 2U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffffffbULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 3U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffffff7ULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 4U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffffffefULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 5U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffffffdfULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 6U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffffffbfULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 7U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffffff7fULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 8U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffffeffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 9U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffffdffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0xaU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffffbffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0xbU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffff7ffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0xcU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffffefffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0xdU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffffdfffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0xeU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffffbfffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0xfU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffff7fffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x10U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffeffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x11U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffdffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x12U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffffbffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x13U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffff7ffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x14U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffefffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x15U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffdfffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x16U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffffbfffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x17U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffff7fffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x18U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffeffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x19U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffdffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x1aU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffffbffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x1bU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffff7ffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x1cU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffefffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x1dU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffdfffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x1eU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffffbfffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x1fU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffff7fffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x20U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffeffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x21U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffdffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x22U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffffbffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x23U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffff7ffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x24U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffefffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x25U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffdfffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x26U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffffbfffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x27U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffff7fffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x28U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffeffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x29U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffdffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x2aU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffffbffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x2bU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffff7ffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x2cU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffefffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x2dU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffdfffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x2eU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffffbfffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x2fU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffff7fffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x30U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffeffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x31U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffdffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x32U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfffbffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x33U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfff7ffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x34U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffefffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x35U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffdfffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x36U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xffbfffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x37U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xff7fffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x38U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfeffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x39U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfdffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x3aU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xfbffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x3bU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xf7ffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x3cU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xefffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x3dU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xdfffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplicand_in >> 0x3eU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0xbfffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelfRef.multiplicand_in ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in 
            = ((0x7fffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplicand_in 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelfRef.multiplier_in) ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffffffeULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.multiplier_in)))));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 1U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffffffdULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 2U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffffffbULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 3U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffffff7ULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 4U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffffffefULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 5U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffffffdfULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 6U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffffffbfULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 7U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffffff7fULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 8U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffffeffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 9U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffffdffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0xaU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffffbffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0xbU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffff7ffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0xcU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffffefffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0xdU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffffdfffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0xeU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffffbfffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0xfU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffff7fffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x10U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffeffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x11U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffdffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x12U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffffbffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x13U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffff7ffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x14U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffefffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x15U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffdfffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x16U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffffbfffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x17U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffff7fffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x18U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffeffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x19U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffdffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x1aU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffffbffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x1bU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffff7ffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x1cU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffefffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x1dU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffdfffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x1eU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffffbfffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x1fU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffff7fffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x20U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffeffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x21U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffdffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x22U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffffbffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x23U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffff7ffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x24U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffefffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x25U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffdfffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x26U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffffbfffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x27U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffff7fffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x28U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffeffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x29U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffdffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x2aU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffffbffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x2bU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffff7ffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x2cU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffefffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x2dU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffdfffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x2eU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffffbfffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x2fU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffff7fffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x30U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffeffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x31U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffdffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x32U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfffbffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x33U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfff7ffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x34U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffefffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x35U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffdfffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x36U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xffbfffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x37U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xff7fffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x38U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfeffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x39U)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfdffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x3aU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xfbffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x3bU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xf7ffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x3cU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xefffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x3dU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xdfffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_in >> 0x3eU)) 
               ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0xbfffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelfRef.multiplier_in ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in 
            = ((0x7fffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_in 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelfRef.multiplier_64x64__DOT__multiplier_reg) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffffeULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.multiplier_64x64__DOT__multiplier_reg)))));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 1U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffffdULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 2U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffffbULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 3U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffff7ULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 4U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffffefULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 5U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffffdfULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 6U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffffbfULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 7U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffff7fULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 8U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffeffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 9U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffdffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xaU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffbffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xbU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffff7ffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xcU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffefffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xdU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffdfffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xeU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffbfffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xfU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffff7fffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x10U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffeffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x11U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffdffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x12U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffbffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x13U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffff7ffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x14U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffefffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x15U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffdfffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x16U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffbfffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x17U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffff7fffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x18U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffeffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x19U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffdffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffbffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffff7ffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffefffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffdfffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffbfffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffff7fffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x20U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffeffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x21U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffdffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x22U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffbffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x23U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffff7ffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x24U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffefffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x25U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffdfffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x26U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffbfffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x27U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffff7fffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x28U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffeffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x29U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffdffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffbffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffff7ffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffefffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffdfffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffbfffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffff7fffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x30U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffeffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x31U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffdffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x32U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffbffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x33U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfff7ffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x34U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffefffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x35U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffdfffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x36U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffbfffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x37U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xff7fffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x38U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfeffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x39U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfdffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfbffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xf7ffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xefffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xdfffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xbfffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0x7fffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__product[0U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__product[1U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__product[2U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__product[3U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vdly__multiplier_64x64__DOT__multiplicand_reg;
    VL_ZERO_W(128, __Vdly__multiplier_64x64__DOT__multiplicand_reg);
    QData/*63:0*/ __Vdly__multiplier_64x64__DOT__multiplier_reg;
    __Vdly__multiplier_64x64__DOT__multiplier_reg = 0;
    VlWide<4>/*127:0*/ __Vdly__multiplier_64x64__DOT__product;
    VL_ZERO_W(128, __Vdly__multiplier_64x64__DOT__product);
    CData/*6:0*/ __Vdly__multiplier_64x64__DOT__count;
    __Vdly__multiplier_64x64__DOT__count = 0;
    CData/*0:0*/ __Vdly__multiplier_64x64__DOT__busy;
    __Vdly__multiplier_64x64__DOT__busy = 0;
    // Body
    __Vdly__multiplier_64x64__DOT__busy = vlSelfRef.multiplier_64x64__DOT__busy;
    __Vdly__multiplier_64x64__DOT__count = vlSelfRef.multiplier_64x64__DOT__count;
    __Vdly__multiplier_64x64__DOT__multiplier_reg = vlSelfRef.multiplier_64x64__DOT__multiplier_reg;
    __Vdly__multiplier_64x64__DOT__multiplicand_reg[0U] 
        = vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U];
    __Vdly__multiplier_64x64__DOT__multiplicand_reg[1U] 
        = vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U];
    __Vdly__multiplier_64x64__DOT__multiplicand_reg[2U] 
        = vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U];
    __Vdly__multiplier_64x64__DOT__multiplicand_reg[3U] 
        = vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U];
    __Vdly__multiplier_64x64__DOT__product[0U] = vlSelfRef.multiplier_64x64__DOT__product[0U];
    __Vdly__multiplier_64x64__DOT__product[1U] = vlSelfRef.multiplier_64x64__DOT__product[1U];
    __Vdly__multiplier_64x64__DOT__product[2U] = vlSelfRef.multiplier_64x64__DOT__product[2U];
    __Vdly__multiplier_64x64__DOT__product[3U] = vlSelfRef.multiplier_64x64__DOT__product[3U];
    if (vlSelfRef.reset) {
        ++(vlSymsp->__Vcoverage[470]);
        __Vdly__multiplier_64x64__DOT__multiplicand_reg[0U] = 0U;
        __Vdly__multiplier_64x64__DOT__multiplicand_reg[1U] = 0U;
        __Vdly__multiplier_64x64__DOT__multiplicand_reg[2U] = 0U;
        __Vdly__multiplier_64x64__DOT__multiplicand_reg[3U] = 0U;
        __Vdly__multiplier_64x64__DOT__multiplier_reg = 0ULL;
        __Vdly__multiplier_64x64__DOT__product[0U] = 0U;
        __Vdly__multiplier_64x64__DOT__product[1U] = 0U;
        __Vdly__multiplier_64x64__DOT__product[2U] = 0U;
        __Vdly__multiplier_64x64__DOT__product[3U] = 0U;
        __Vdly__multiplier_64x64__DOT__count = 0U;
        __Vdly__multiplier_64x64__DOT__busy = 0U;
        vlSelfRef.multiplier_64x64__DOT__done = 0U;
    } else {
        vlSelfRef.multiplier_64x64__DOT__done = 0U;
        if (((IData)(vlSelfRef.start) & (~ (IData)(vlSelfRef.multiplier_64x64__DOT__busy)))) {
            ++(vlSymsp->__Vcoverage[466]);
            __Vdly__multiplier_64x64__DOT__multiplicand_reg[0U] 
                = (IData)(vlSelfRef.multiplicand_in);
            __Vdly__multiplier_64x64__DOT__multiplicand_reg[1U] 
                = (IData)((vlSelfRef.multiplicand_in 
                           >> 0x20U));
            __Vdly__multiplier_64x64__DOT__multiplicand_reg[2U] = 0U;
            __Vdly__multiplier_64x64__DOT__multiplicand_reg[3U] = 0U;
            __Vdly__multiplier_64x64__DOT__multiplier_reg 
                = vlSelfRef.multiplier_in;
            __Vdly__multiplier_64x64__DOT__product[0U] = 0U;
            __Vdly__multiplier_64x64__DOT__product[1U] = 0U;
            __Vdly__multiplier_64x64__DOT__product[2U] = 0U;
            __Vdly__multiplier_64x64__DOT__product[3U] = 0U;
            __Vdly__multiplier_64x64__DOT__count = 0U;
            __Vdly__multiplier_64x64__DOT__busy = 1U;
        } else if (vlSelfRef.multiplier_64x64__DOT__busy) {
            if ((1U & (IData)(vlSelfRef.multiplier_64x64__DOT__multiplier_reg))) {
                VL_ADD_W(4, __Vdly__multiplier_64x64__DOT__product, vlSelfRef.multiplier_64x64__DOT__product, vlSelfRef.multiplier_64x64__DOT__multiplicand_reg);
                ++(vlSymsp->__Vcoverage[460]);
            } else {
                ++(vlSymsp->__Vcoverage[461]);
            }
            VL_SHIFTL_WWI(128,128,32, __Vdly__multiplier_64x64__DOT__multiplicand_reg, vlSelfRef.multiplier_64x64__DOT__multiplicand_reg, 1U);
            __Vdly__multiplier_64x64__DOT__multiplier_reg 
                = VL_SHIFTR_QQI(64,64,32, vlSelfRef.multiplier_64x64__DOT__multiplier_reg, 1U);
            __Vdly__multiplier_64x64__DOT__count = 
                (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
            if ((0x3fU == (IData)(vlSelfRef.multiplier_64x64__DOT__count))) {
                ++(vlSymsp->__Vcoverage[462]);
                __Vdly__multiplier_64x64__DOT__busy = 0U;
                vlSelfRef.multiplier_64x64__DOT__done = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[463]);
            }
            ++(vlSymsp->__Vcoverage[464]);
        } else {
            ++(vlSymsp->__Vcoverage[465]);
        }
        if (((IData)(vlSelfRef.start) & (~ (IData)(vlSelfRef.multiplier_64x64__DOT__busy)))) {
            ++(vlSymsp->__Vcoverage[467]);
        }
        if (vlSelfRef.multiplier_64x64__DOT__busy) {
            ++(vlSymsp->__Vcoverage[468]);
        }
        if ((1U & (~ (IData)(vlSelfRef.start)))) {
            ++(vlSymsp->__Vcoverage[469]);
        }
        ++(vlSymsp->__Vcoverage[471]);
    }
    ++(vlSymsp->__Vcoverage[472]);
    vlSelfRef.multiplier_64x64__DOT__busy = __Vdly__multiplier_64x64__DOT__busy;
    vlSelfRef.multiplier_64x64__DOT__count = __Vdly__multiplier_64x64__DOT__count;
    vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
        = __Vdly__multiplier_64x64__DOT__multiplier_reg;
    vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
        = __Vdly__multiplier_64x64__DOT__multiplicand_reg[0U];
    vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
        = __Vdly__multiplier_64x64__DOT__multiplicand_reg[1U];
    vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
        = __Vdly__multiplier_64x64__DOT__multiplicand_reg[2U];
    vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
        = __Vdly__multiplier_64x64__DOT__multiplicand_reg[3U];
    vlSelfRef.multiplier_64x64__DOT__product[0U] = 
        __Vdly__multiplier_64x64__DOT__product[0U];
    vlSelfRef.multiplier_64x64__DOT__product[1U] = 
        __Vdly__multiplier_64x64__DOT__product[1U];
    vlSelfRef.multiplier_64x64__DOT__product[2U] = 
        __Vdly__multiplier_64x64__DOT__product[2U];
    vlSelfRef.multiplier_64x64__DOT__product[3U] = 
        __Vdly__multiplier_64x64__DOT__product[3U];
    if (((IData)(vlSelfRef.multiplier_64x64__DOT__busy) 
         ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__busy))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__busy 
            = vlSelfRef.multiplier_64x64__DOT__busy;
    }
    vlSelfRef.busy = vlSelfRef.multiplier_64x64__DOT__busy;
    if (((IData)(vlSelfRef.multiplier_64x64__DOT__done) 
         ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__done))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__done 
            = vlSelfRef.multiplier_64x64__DOT__done;
    }
    vlSelfRef.done = vlSelfRef.multiplier_64x64__DOT__done;
    if ((1U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x7eU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((2U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x7dU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((4U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x7bU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((8U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x77U & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
                  ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x6fU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (0x10U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
                  ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x5fU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (0x20U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((0x40U & ((IData)(vlSelfRef.multiplier_64x64__DOT__count) 
                  ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__count 
            = ((0x3fU & (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__count)) 
               | (0x40U & (IData)(vlSelfRef.multiplier_64x64__DOT__count)));
    }
    if ((1U & ((IData)(vlSelfRef.multiplier_64x64__DOT__multiplier_reg) 
               ^ (IData)(vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffffeULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.multiplier_64x64__DOT__multiplier_reg)))));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 1U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffffdULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 2U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffffbULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 3U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffff7ULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 4U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffffefULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 5U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffffdfULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 6U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffffbfULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 7U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffff7fULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 8U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffeffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 9U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffdffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xaU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffffbffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xbU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffff7ffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xcU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffefffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xdU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffdfffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xeU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffffbfffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0xfU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffff7fffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x10U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffeffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x11U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffdffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x12U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffffbffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x13U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffff7ffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x14U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffefffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x15U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffdfffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x16U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffffbfffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x17U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffff7fffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x18U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffeffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x19U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffdffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffffbffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffff7ffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffefffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffdfffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffffbfffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffff7fffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x20U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffeffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x21U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffdffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x22U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffffbffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x23U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffff7ffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x24U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffefffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x25U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffdfffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x26U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffffbfffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x27U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffff7fffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x28U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffeffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x29U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffdffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffffbffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffff7ffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffefffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffdfffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffffbfffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffff7fffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x30U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffeffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x31U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffdffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x32U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfffbffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x33U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfff7ffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x34U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffefffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x35U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffdfffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x36U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xffbfffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x37U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xff7fffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x38U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfeffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x39U)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfdffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xfbffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xf7ffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xefffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xdfffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0xbfffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg 
            = ((0x7fffffffffffffffULL & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplier_reg) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.multiplier_64x64__DOT__multiplier_reg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[0U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[0U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[1U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[1U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[2U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[2U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__multiplicand_reg[3U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__multiplicand_reg[3U]));
    }
    vlSelfRef.product[0U] = vlSelfRef.multiplier_64x64__DOT__product[0U];
    vlSelfRef.product[1U] = vlSelfRef.multiplier_64x64__DOT__product[1U];
    vlSelfRef.product[2U] = vlSelfRef.multiplier_64x64__DOT__product[2U];
    vlSelfRef.product[3U] = vlSelfRef.multiplier_64x64__DOT__product[3U];
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__product[0U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__product[0U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[0U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__product[0U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__product[1U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__product[1U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[1U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__product[1U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__product[2U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__product[2U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[2U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__product[2U]));
    }
    if ((1U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (1U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((2U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (2U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((4U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (4U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((8U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
               ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (8U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x10U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x20U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x40U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                  ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x80U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x100U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x200U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x400U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                   ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x800U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x1000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x2000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x4000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                    ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x8000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x10000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x20000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x40000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                     ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x80000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x100000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x200000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x400000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                      ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x800000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x1000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x2000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x4000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                       ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x8000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x10000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x20000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier_64x64__DOT__product[3U] 
                        ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x40000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
    if (((vlSelfRef.multiplier_64x64__DOT__product[3U] 
          ^ vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier_64x64__DOT____Vtogcov__product[3U]) 
               | (0x80000000U & vlSelfRef.multiplier_64x64__DOT__product[3U]));
    }
}

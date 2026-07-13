// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13453]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13454]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13455]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13456]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13457]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13458]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13459]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13460]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13461]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13462]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13463]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13464]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13465]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13466]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13467]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13468]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13469]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]))) {
        ++(vlSymsp->__Vcoverage[13470]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_7[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13471]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_7[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13472]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13473]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13474]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13475]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13476]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13477]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13478]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13479]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13480]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13481]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13482]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13483]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13484]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13485]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13486]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13487]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13488]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13489]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13490]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13491]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13492]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13493]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13494]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13495]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13496]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13497]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13498]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13499]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13500]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13501]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]))) {
        ++(vlSymsp->__Vcoverage[13502]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_7[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13503]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_7[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13504]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13505]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13506]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13507]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13508]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13509]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13510]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13511]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13512]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13513]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13514]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13515]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13516]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13517]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13518]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13519]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13520]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13521]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13522]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13523]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13524]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13525]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13526]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13527]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13528]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13529]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13530]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13531]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13532]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13533]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]))) {
        ++(vlSymsp->__Vcoverage[13534]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_7[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13535]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_7[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13536]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13537]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13538]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13539]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13540]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13541]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13542]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13543]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13544]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13545]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13546]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13547]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13548]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13549]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13550]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13551]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13552]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13553]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13554]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13555]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13556]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13557]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13558]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13559]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13560]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13561]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13562]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13563]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13564]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13565]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]))) {
        ++(vlSymsp->__Vcoverage[13566]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_7[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13567]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_7[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_7[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23040]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23041]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23042]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23043]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23044]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23045]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23046]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23047]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23048]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23049]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23050]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23051]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23052]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23053]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23054]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23055]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23056]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23057]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23058]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23059]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23060]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23061]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23062]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23063]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23064]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23065]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23066]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23067]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23068]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23069]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23070]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A51__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23071]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23072]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23073]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23074]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23075]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23076]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23077]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23078]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23079]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23080]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23081]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23082]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23083]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23084]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23085]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23086]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23087]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23088]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23089]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23090]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23091]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23092]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23093]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23094]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23095]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23096]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23097]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23098]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23099]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23100]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23101]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23102]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A51__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23103]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23104]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23105]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23106]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23107]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23108]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23109]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23110]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23111]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23112]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23113]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23114]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23115]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23116]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23117]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23118]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23119]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23120]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23121]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23122]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23123]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23124]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23125]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23126]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23127]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23128]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23129]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23130]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23131]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23132]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23133]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23134]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A51__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23135]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23136]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23137]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23138]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23139]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23140]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23141]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23142]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23143]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23144]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23145]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23146]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23147]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23148]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23149]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23150]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23151]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23152]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23153]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23154]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23155]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23156]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23157]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23158]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23159]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23160]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23161]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23162]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23163]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23164]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23165]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23166]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A51__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23167]);
        vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A51__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A51__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l2_3[0U] = vlSelfRef.multiplier__DOT__A51__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l2_3[1U] = vlSelfRef.multiplier__DOT__A51__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l2_3[2U] = vlSelfRef.multiplier__DOT__A51__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l2_3[3U] = vlSelfRef.multiplier__DOT__A51__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A57__DOT__sum, vlSelfRef.multiplier__DOT__A50__DOT__sum, vlSelfRef.multiplier__DOT__A51__DOT__sum);
    vlSelfRef.multiplier__DOT__A52__DOT__a[0U] = vlSelfRef.multiplier__DOT__l1_8[0U];
    vlSelfRef.multiplier__DOT__A52__DOT__a[1U] = vlSelfRef.multiplier__DOT__l1_8[1U];
    vlSelfRef.multiplier__DOT__A52__DOT__a[2U] = vlSelfRef.multiplier__DOT__l1_8[2U];
    vlSelfRef.multiplier__DOT__A52__DOT__a[3U] = vlSelfRef.multiplier__DOT__l1_8[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13568]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13569]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13570]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13571]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13572]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13573]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13574]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13575]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13576]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13577]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13578]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13579]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13580]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13581]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13582]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13583]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13584]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13585]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13586]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13587]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13588]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13589]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13590]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13591]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13592]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13593]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13594]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13595]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13596]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13597]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]))) {
        ++(vlSymsp->__Vcoverage[13598]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_8[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13599]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_8[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13600]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13601]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13602]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13603]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13604]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13605]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13606]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13607]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13608]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13609]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13610]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13611]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13612]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13613]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13614]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13615]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13616]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13617]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13618]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13619]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13620]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13621]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13622]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13623]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13624]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13625]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13626]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13627]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13628]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13629]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]))) {
        ++(vlSymsp->__Vcoverage[13630]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_8[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13631]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_8[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13632]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13633]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13634]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13635]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13636]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13637]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13638]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13639]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13640]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13641]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13642]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13643]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13644]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13645]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13646]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13647]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13648]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13649]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13650]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13651]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13652]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13653]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13654]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13655]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13656]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13657]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13658]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13659]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13660]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13661]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]))) {
        ++(vlSymsp->__Vcoverage[13662]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_8[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13663]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_8[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13664]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13665]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13666]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13667]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13668]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13669]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13670]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13671]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13672]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13673]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13674]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13675]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13676]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13677]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13678]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13679]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13680]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13681]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13682]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13683]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13684]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13685]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13686]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13687]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13688]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13689]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13690]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13691]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13692]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13693]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]))) {
        ++(vlSymsp->__Vcoverage[13694]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_8[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13695]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_8[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_8[3U]));
    }
    vlSelfRef.multiplier__DOT__A52__DOT__b[0U] = vlSelfRef.multiplier__DOT__l1_9[0U];
    vlSelfRef.multiplier__DOT__A52__DOT__b[1U] = vlSelfRef.multiplier__DOT__l1_9[1U];
    vlSelfRef.multiplier__DOT__A52__DOT__b[2U] = vlSelfRef.multiplier__DOT__l1_9[2U];
    vlSelfRef.multiplier__DOT__A52__DOT__b[3U] = vlSelfRef.multiplier__DOT__l1_9[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13696]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13697]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13698]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13699]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13700]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13701]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13702]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13703]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13704]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13705]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13706]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13707]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13708]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13709]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13710]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13711]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13712]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13713]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13714]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13715]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13716]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13717]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13718]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13719]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13720]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13721]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13722]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13723]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13724]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13725]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]))) {
        ++(vlSymsp->__Vcoverage[13726]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_9[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13727]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_9[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13728]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13729]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13730]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13731]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13732]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13733]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13734]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13735]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13736]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13737]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13738]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13739]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13740]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13741]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13742]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13743]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13744]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13745]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13746]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13747]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13748]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13749]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13750]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13751]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13752]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13753]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13754]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13755]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13756]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13757]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]))) {
        ++(vlSymsp->__Vcoverage[13758]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_9[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13759]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_9[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13760]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13761]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13762]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13763]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13764]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13765]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13766]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13767]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13768]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13769]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13770]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13771]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13772]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13773]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13774]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13775]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13776]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13777]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13778]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13779]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13780]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13781]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13782]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13783]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13784]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13785]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13786]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13787]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13788]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13789]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]))) {
        ++(vlSymsp->__Vcoverage[13790]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_9[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13791]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_9[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13792]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13793]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13794]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13795]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13796]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13797]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13798]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13799]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13800]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13801]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13802]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13803]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13804]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13805]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13806]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13807]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13808]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13809]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13810]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13811]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13812]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13813]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13814]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13815]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13816]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13817]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13818]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13819]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13820]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13821]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]))) {
        ++(vlSymsp->__Vcoverage[13822]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_9[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13823]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_9[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_9[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23168]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23169]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23170]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23171]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23172]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23173]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23174]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23175]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23176]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23177]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23178]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23179]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23180]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23181]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23182]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23183]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23184]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23185]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23186]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23187]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23188]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23189]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23190]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23191]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23192]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23193]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23194]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23195]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23196]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23197]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23198]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A52__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23199]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23200]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23201]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23202]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23203]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23204]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23205]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23206]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23207]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23208]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23209]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23210]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23211]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23212]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23213]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23214]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23215]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23216]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23217]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23218]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23219]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23220]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23221]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23222]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23223]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23224]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23225]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23226]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23227]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23228]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23229]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23230]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A52__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23231]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23232]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23233]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23234]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23235]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23236]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23237]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23238]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23239]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23240]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23241]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23242]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23243]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23244]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23245]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23246]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23247]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23248]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23249]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23250]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23251]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23252]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23253]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23254]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23255]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23256]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23257]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23258]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23259]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23260]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23261]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23262]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A52__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23263]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23264]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23265]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23266]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23267]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23268]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23269]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23270]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23271]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23272]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23273]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23274]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23275]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23276]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23277]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23278]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23279]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23280]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23281]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23282]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23283]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23284]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23285]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23286]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23287]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23288]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23289]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23290]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23291]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23292]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23293]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23294]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A52__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23295]);
        vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A52__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A52__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l2_4[0U] = vlSelfRef.multiplier__DOT__A52__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l2_4[1U] = vlSelfRef.multiplier__DOT__A52__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l2_4[2U] = vlSelfRef.multiplier__DOT__A52__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l2_4[3U] = vlSelfRef.multiplier__DOT__A52__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A53__DOT__a[0U] = vlSelfRef.multiplier__DOT__l1_10[0U];
    vlSelfRef.multiplier__DOT__A53__DOT__a[1U] = vlSelfRef.multiplier__DOT__l1_10[1U];
    vlSelfRef.multiplier__DOT__A53__DOT__a[2U] = vlSelfRef.multiplier__DOT__l1_10[2U];
    vlSelfRef.multiplier__DOT__A53__DOT__a[3U] = vlSelfRef.multiplier__DOT__l1_10[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13824]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13825]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13826]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13827]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13828]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13829]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13830]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13831]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13832]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13833]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13834]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13835]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13836]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13837]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13838]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13839]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13840]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13841]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13842]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13843]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13844]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13845]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13846]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13847]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13848]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13849]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13850]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13851]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13852]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13853]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]))) {
        ++(vlSymsp->__Vcoverage[13854]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_10[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13855]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_10[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13856]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13857]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13858]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13859]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13860]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13861]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13862]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13863]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13864]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13865]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13866]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13867]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13868]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13869]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13870]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13871]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13872]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13873]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13874]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13875]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13876]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13877]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13878]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13879]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13880]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13881]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13882]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13883]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13884]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13885]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]))) {
        ++(vlSymsp->__Vcoverage[13886]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_10[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13887]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_10[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13888]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13889]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13890]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13891]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13892]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13893]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13894]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13895]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13896]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13897]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13898]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13899]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13900]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13901]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13902]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13903]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13904]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13905]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13906]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13907]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13908]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13909]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13910]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13911]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13912]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13913]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13914]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13915]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13916]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13917]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]))) {
        ++(vlSymsp->__Vcoverage[13918]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_10[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13919]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_10[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13920]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13921]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13922]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13923]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13924]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13925]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13926]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13927]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13928]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13929]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13930]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13931]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13932]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13933]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13934]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13935]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13936]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13937]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13938]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13939]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13940]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13941]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13942]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13943]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13944]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13945]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13946]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13947]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13948]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13949]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]))) {
        ++(vlSymsp->__Vcoverage[13950]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_10[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13951]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_10[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_10[3U]));
    }
    vlSelfRef.multiplier__DOT__A53__DOT__b[0U] = vlSelfRef.multiplier__DOT__l1_11[0U];
    vlSelfRef.multiplier__DOT__A53__DOT__b[1U] = vlSelfRef.multiplier__DOT__l1_11[1U];
    vlSelfRef.multiplier__DOT__A53__DOT__b[2U] = vlSelfRef.multiplier__DOT__l1_11[2U];
    vlSelfRef.multiplier__DOT__A53__DOT__b[3U] = vlSelfRef.multiplier__DOT__l1_11[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13952]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13953]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13954]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13955]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13956]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13957]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13958]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13959]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13960]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13961]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13962]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13963]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13964]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13965]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13966]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13967]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13968]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13969]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13970]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13971]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13972]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13973]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13974]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13975]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13976]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13977]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13978]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13979]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13980]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13981]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]))) {
        ++(vlSymsp->__Vcoverage[13982]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_11[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13983]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_11[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13984]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13985]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13986]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13987]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13988]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13989]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13990]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13991]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13992]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13993]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13994]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13995]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13996]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13997]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13998]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[13999]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14000]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14001]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14002]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14003]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14004]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14005]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14006]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14007]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14008]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14009]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14010]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14011]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14012]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14013]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]))) {
        ++(vlSymsp->__Vcoverage[14014]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_11[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14015]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_11[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14016]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14017]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14018]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14019]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14020]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14021]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14022]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14023]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14024]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14025]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14026]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14027]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14028]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14029]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14030]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14031]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14032]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14033]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14034]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14035]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14036]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14037]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14038]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14039]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14040]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14041]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14042]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14043]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14044]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14045]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]))) {
        ++(vlSymsp->__Vcoverage[14046]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_11[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14047]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_11[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14048]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14049]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14050]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14051]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14052]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14053]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14054]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14055]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14056]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14057]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14058]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14059]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14060]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14061]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14062]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14063]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14064]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14065]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14066]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14067]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14068]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14069]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14070]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14071]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14072]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14073]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14074]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14075]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14076]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14077]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]))) {
        ++(vlSymsp->__Vcoverage[14078]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_11[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14079]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_11[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_11[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23296]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23297]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23298]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23299]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23300]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23301]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23302]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23303]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23304]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23305]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23306]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23307]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23308]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23309]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23310]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23311]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23312]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23313]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23314]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23315]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23316]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23317]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23318]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23319]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23320]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23321]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23322]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23323]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23324]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23325]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23326]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A53__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23327]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23328]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23329]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23330]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23331]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23332]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23333]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23334]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23335]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23336]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23337]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23338]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23339]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23340]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23341]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23342]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23343]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23344]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23345]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23346]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23347]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23348]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23349]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23350]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23351]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23352]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23353]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23354]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23355]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23356]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23357]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23358]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A53__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23359]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23360]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23361]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23362]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23363]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23364]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23365]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23366]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23367]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23368]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23369]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23370]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23371]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23372]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23373]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23374]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23375]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23376]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23377]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23378]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23379]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23380]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23381]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23382]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23383]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23384]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23385]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23386]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23387]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23388]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23389]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23390]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A53__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23391]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23392]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23393]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23394]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23395]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23396]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23397]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23398]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23399]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23400]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23401]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23402]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23403]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23404]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23405]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23406]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23407]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23408]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23409]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23410]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23411]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23412]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23413]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23414]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23415]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23416]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23417]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23418]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23419]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23420]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23421]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23422]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A53__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23423]);
        vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A53__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A53__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l2_5[0U] = vlSelfRef.multiplier__DOT__A53__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l2_5[1U] = vlSelfRef.multiplier__DOT__A53__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l2_5[2U] = vlSelfRef.multiplier__DOT__A53__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l2_5[3U] = vlSelfRef.multiplier__DOT__A53__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A58__DOT__sum, vlSelfRef.multiplier__DOT__A52__DOT__sum, vlSelfRef.multiplier__DOT__A53__DOT__sum);
    vlSelfRef.multiplier__DOT__A54__DOT__a[0U] = vlSelfRef.multiplier__DOT__l1_12[0U];
    vlSelfRef.multiplier__DOT__A54__DOT__a[1U] = vlSelfRef.multiplier__DOT__l1_12[1U];
    vlSelfRef.multiplier__DOT__A54__DOT__a[2U] = vlSelfRef.multiplier__DOT__l1_12[2U];
    vlSelfRef.multiplier__DOT__A54__DOT__a[3U] = vlSelfRef.multiplier__DOT__l1_12[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14080]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14081]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14082]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14083]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14084]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14085]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14086]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14087]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14088]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14089]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14090]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14091]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14092]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14093]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14094]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14095]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14096]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14097]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14098]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14099]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14100]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14101]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14102]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14103]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14104]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14105]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14106]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14107]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14108]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14109]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]))) {
        ++(vlSymsp->__Vcoverage[14110]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_12[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14111]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_12[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14112]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14113]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14114]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14115]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14116]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14117]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14118]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14119]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14120]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14121]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14122]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14123]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14124]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14125]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14126]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14127]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14128]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14129]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14130]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14131]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14132]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14133]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14134]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14135]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14136]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14137]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14138]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14139]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14140]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14141]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]))) {
        ++(vlSymsp->__Vcoverage[14142]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_12[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14143]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_12[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14144]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14145]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14146]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14147]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14148]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14149]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14150]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14151]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14152]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14153]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14154]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14155]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14156]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14157]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14158]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14159]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14160]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14161]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14162]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14163]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14164]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14165]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14166]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14167]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14168]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14169]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14170]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14171]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14172]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14173]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]))) {
        ++(vlSymsp->__Vcoverage[14174]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_12[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14175]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_12[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14176]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14177]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14178]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14179]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14180]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14181]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14182]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14183]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14184]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14185]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14186]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14187]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14188]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14189]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14190]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14191]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14192]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14193]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14194]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14195]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14196]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14197]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14198]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14199]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14200]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14201]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14202]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14203]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14204]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14205]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]))) {
        ++(vlSymsp->__Vcoverage[14206]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_12[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14207]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_12[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_12[3U]));
    }
    vlSelfRef.multiplier__DOT__A54__DOT__b[0U] = vlSelfRef.multiplier__DOT__l1_13[0U];
    vlSelfRef.multiplier__DOT__A54__DOT__b[1U] = vlSelfRef.multiplier__DOT__l1_13[1U];
    vlSelfRef.multiplier__DOT__A54__DOT__b[2U] = vlSelfRef.multiplier__DOT__l1_13[2U];
    vlSelfRef.multiplier__DOT__A54__DOT__b[3U] = vlSelfRef.multiplier__DOT__l1_13[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14208]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14209]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14210]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14211]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14212]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14213]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14214]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14215]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14216]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14217]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14218]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14219]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14220]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14221]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14222]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14223]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14224]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14225]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14226]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14227]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14228]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14229]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14230]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14231]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14232]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14233]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14234]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14235]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14236]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14237]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]))) {
        ++(vlSymsp->__Vcoverage[14238]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_13[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14239]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_13[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14240]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14241]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14242]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14243]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14244]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14245]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14246]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14247]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14248]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14249]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14250]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14251]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14252]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14253]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14254]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14255]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14256]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14257]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14258]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14259]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14260]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14261]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14262]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14263]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14264]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14265]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14266]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14267]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14268]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14269]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]))) {
        ++(vlSymsp->__Vcoverage[14270]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_13[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14271]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_13[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14272]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14273]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14274]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14275]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14276]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14277]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14278]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14279]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14280]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14281]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14282]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14283]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14284]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14285]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14286]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14287]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14288]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14289]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14290]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14291]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14292]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14293]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14294]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14295]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14296]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14297]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14298]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14299]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14300]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14301]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]))) {
        ++(vlSymsp->__Vcoverage[14302]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_13[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14303]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_13[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14304]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14305]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14306]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14307]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14308]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14309]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14310]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14311]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14312]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14313]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14314]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14315]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14316]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14317]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14318]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14319]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14320]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14321]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14322]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14323]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14324]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14325]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14326]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14327]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14328]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14329]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14330]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14331]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14332]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14333]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]))) {
        ++(vlSymsp->__Vcoverage[14334]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_13[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14335]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_13[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_13[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23424]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23425]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23426]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23427]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23428]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23429]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23430]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23431]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23432]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23433]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23434]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23435]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23436]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23437]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23438]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23439]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23440]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23441]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23442]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23443]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23444]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23445]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23446]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23447]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23448]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23449]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23450]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23451]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23452]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23453]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23454]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A54__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23455]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23456]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23457]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23458]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23459]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23460]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23461]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23462]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23463]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23464]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23465]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23466]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23467]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23468]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23469]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23470]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23471]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23472]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23473]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23474]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23475]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23476]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23477]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23478]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23479]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23480]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23481]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23482]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23483]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23484]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23485]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23486]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A54__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23487]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23488]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23489]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23490]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23491]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23492]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23493]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23494]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23495]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23496]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23497]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23498]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23499]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23500]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23501]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23502]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23503]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23504]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23505]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23506]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23507]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23508]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23509]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23510]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23511]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23512]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23513]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23514]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23515]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23516]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23517]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23518]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A54__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23519]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23520]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23521]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23522]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23523]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23524]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23525]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23526]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23527]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23528]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23529]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23530]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23531]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23532]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23533]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23534]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23535]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23536]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23537]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23538]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23539]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23540]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23541]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23542]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23543]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23544]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23545]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23546]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23547]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23548]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23549]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23550]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A54__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23551]);
        vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A54__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A54__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l2_6[0U] = vlSelfRef.multiplier__DOT__A54__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l2_6[1U] = vlSelfRef.multiplier__DOT__A54__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l2_6[2U] = vlSelfRef.multiplier__DOT__A54__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l2_6[3U] = vlSelfRef.multiplier__DOT__A54__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A55__DOT__a[0U] = vlSelfRef.multiplier__DOT__l1_14[0U];
    vlSelfRef.multiplier__DOT__A55__DOT__a[1U] = vlSelfRef.multiplier__DOT__l1_14[1U];
    vlSelfRef.multiplier__DOT__A55__DOT__a[2U] = vlSelfRef.multiplier__DOT__l1_14[2U];
    vlSelfRef.multiplier__DOT__A55__DOT__a[3U] = vlSelfRef.multiplier__DOT__l1_14[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14336]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14337]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14338]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14339]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14340]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14341]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14342]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14343]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14344]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14345]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14346]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14347]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14348]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14349]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14350]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14351]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14352]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14353]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14354]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14355]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14356]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14357]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14358]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14359]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14360]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14361]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14362]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14363]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14364]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14365]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]))) {
        ++(vlSymsp->__Vcoverage[14366]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_14[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14367]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_14[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14368]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14369]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14370]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14371]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14372]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14373]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14374]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14375]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14376]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14377]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14378]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14379]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14380]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14381]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14382]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14383]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14384]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14385]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14386]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14387]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14388]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14389]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14390]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14391]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14392]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14393]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14394]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14395]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14396]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14397]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]))) {
        ++(vlSymsp->__Vcoverage[14398]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_14[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14399]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_14[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14400]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14401]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14402]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14403]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14404]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14405]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14406]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14407]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14408]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14409]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14410]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14411]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14412]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14413]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14414]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14415]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14416]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14417]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14418]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14419]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14420]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14421]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14422]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14423]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14424]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14425]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14426]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14427]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14428]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14429]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]))) {
        ++(vlSymsp->__Vcoverage[14430]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_14[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14431]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_14[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14432]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14433]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14434]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14435]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14436]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14437]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14438]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14439]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14440]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14441]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14442]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14443]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14444]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14445]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14446]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14447]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14448]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14449]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14450]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14451]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14452]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14453]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14454]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14455]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14456]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14457]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14458]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14459]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14460]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14461]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]))) {
        ++(vlSymsp->__Vcoverage[14462]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_14[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14463]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_14[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_14[3U]));
    }
    vlSelfRef.multiplier__DOT__A55__DOT__b[0U] = vlSelfRef.multiplier__DOT__l1_15[0U];
    vlSelfRef.multiplier__DOT__A55__DOT__b[1U] = vlSelfRef.multiplier__DOT__l1_15[1U];
    vlSelfRef.multiplier__DOT__A55__DOT__b[2U] = vlSelfRef.multiplier__DOT__l1_15[2U];
    vlSelfRef.multiplier__DOT__A55__DOT__b[3U] = vlSelfRef.multiplier__DOT__l1_15[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14464]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14465]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14466]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14467]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14468]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14469]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14470]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14471]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14472]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14473]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14474]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14475]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14476]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14477]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14478]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14479]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14480]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14481]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14482]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14483]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14484]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14485]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14486]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14487]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14488]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14489]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14490]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14491]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14492]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14493]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]))) {
        ++(vlSymsp->__Vcoverage[14494]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_15[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14495]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_15[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14496]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14497]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14498]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14499]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14500]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14501]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14502]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14503]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14504]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14505]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14506]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14507]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14508]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14509]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14510]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14511]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14512]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14513]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14514]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14515]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14516]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14517]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14518]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14519]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14520]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14521]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14522]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14523]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14524]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14525]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]))) {
        ++(vlSymsp->__Vcoverage[14526]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_15[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14527]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_15[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14528]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14529]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14530]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14531]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14532]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14533]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14534]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14535]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14536]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14537]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14538]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14539]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14540]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14541]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14542]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14543]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14544]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14545]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14546]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14547]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14548]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14549]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14550]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14551]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14552]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14553]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14554]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14555]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14556]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14557]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]))) {
        ++(vlSymsp->__Vcoverage[14558]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_15[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14559]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_15[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14560]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14561]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14562]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14563]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14564]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14565]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14566]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14567]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14568]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14569]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14570]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14571]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14572]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14573]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14574]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14575]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14576]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14577]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14578]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14579]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14580]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14581]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14582]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14583]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14584]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14585]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14586]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14587]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14588]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14589]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l1_15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]))) {
        ++(vlSymsp->__Vcoverage[14590]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l1_15[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14591]);
        vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l1_15[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l1_15[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23552]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23553]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23554]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23555]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23556]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23557]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23558]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23559]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23560]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23561]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23562]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23563]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23564]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23565]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23566]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23567]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23568]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23569]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23570]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23571]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23572]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23573]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23574]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23575]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23576]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23577]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23578]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23579]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23580]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23581]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23582]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A55__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23583]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23584]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23585]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23586]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23587]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23588]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23589]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23590]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23591]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23592]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23593]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23594]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23595]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23596]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23597]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23598]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23599]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23600]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23601]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23602]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23603]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23604]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23605]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23606]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23607]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23608]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23609]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23610]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23611]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23612]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23613]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23614]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A55__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23615]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23616]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23617]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23618]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23619]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23620]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23621]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23622]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23623]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23624]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23625]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23626]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23627]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23628]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23629]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23630]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23631]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23632]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23633]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23634]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23635]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23636]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23637]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23638]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23639]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23640]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23641]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23642]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23643]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23644]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23645]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23646]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A55__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23647]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23648]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23649]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23650]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23651]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23652]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23653]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23654]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23655]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23656]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23657]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23658]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23659]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23660]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23661]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23662]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23663]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23664]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23665]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23666]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23667]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23668]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23669]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23670]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23671]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23672]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23673]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23674]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23675]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23676]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23677]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23678]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A55__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23679]);
        vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A55__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A55__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l2_7[0U] = vlSelfRef.multiplier__DOT__A55__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l2_7[1U] = vlSelfRef.multiplier__DOT__A55__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l2_7[2U] = vlSelfRef.multiplier__DOT__A55__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l2_7[3U] = vlSelfRef.multiplier__DOT__A55__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A59__DOT__sum, vlSelfRef.multiplier__DOT__A54__DOT__sum, vlSelfRef.multiplier__DOT__A55__DOT__sum);
    vlSelfRef.multiplier__DOT__A56__DOT__a[0U] = vlSelfRef.multiplier__DOT__l2_0[0U];
    vlSelfRef.multiplier__DOT__A56__DOT__a[1U] = vlSelfRef.multiplier__DOT__l2_0[1U];
    vlSelfRef.multiplier__DOT__A56__DOT__a[2U] = vlSelfRef.multiplier__DOT__l2_0[2U];
    vlSelfRef.multiplier__DOT__A56__DOT__a[3U] = vlSelfRef.multiplier__DOT__l2_0[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14592]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14593]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14594]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14595]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14596]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14597]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14598]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14599]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14600]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14601]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14602]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14603]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14604]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14605]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14606]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14607]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14608]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14609]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14610]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14611]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14612]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14613]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14614]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14615]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14616]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14617]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14618]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14619]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14620]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14621]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]))) {
        ++(vlSymsp->__Vcoverage[14622]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_0[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14623]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_0[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14624]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14625]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14626]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14627]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14628]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14629]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14630]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14631]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14632]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14633]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14634]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14635]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14636]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14637]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14638]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14639]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14640]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14641]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14642]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14643]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14644]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14645]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14646]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14647]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14648]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14649]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14650]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14651]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14652]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14653]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]))) {
        ++(vlSymsp->__Vcoverage[14654]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_0[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14655]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_0[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14656]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14657]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14658]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14659]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14660]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14661]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14662]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14663]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14664]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14665]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14666]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14667]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14668]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14669]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14670]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14671]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14672]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14673]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14674]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14675]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14676]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14677]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14678]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14679]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14680]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14681]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14682]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14683]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14684]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14685]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]))) {
        ++(vlSymsp->__Vcoverage[14686]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_0[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14687]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_0[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14688]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14689]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14690]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14691]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14692]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14693]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14694]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14695]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14696]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14697]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14698]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14699]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14700]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14701]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14702]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14703]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14704]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14705]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14706]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14707]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14708]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14709]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14710]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14711]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14712]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14713]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14714]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14715]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14716]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14717]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]))) {
        ++(vlSymsp->__Vcoverage[14718]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_0[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14719]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_0[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_0[3U]));
    }
    vlSelfRef.multiplier__DOT__A56__DOT__b[0U] = vlSelfRef.multiplier__DOT__l2_1[0U];
    vlSelfRef.multiplier__DOT__A56__DOT__b[1U] = vlSelfRef.multiplier__DOT__l2_1[1U];
    vlSelfRef.multiplier__DOT__A56__DOT__b[2U] = vlSelfRef.multiplier__DOT__l2_1[2U];
    vlSelfRef.multiplier__DOT__A56__DOT__b[3U] = vlSelfRef.multiplier__DOT__l2_1[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14720]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14721]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14722]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14723]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14724]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14725]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14726]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14727]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14728]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14729]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14730]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14731]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14732]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14733]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14734]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14735]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14736]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14737]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14738]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14739]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14740]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14741]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14742]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14743]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14744]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14745]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14746]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14747]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14748]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14749]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]))) {
        ++(vlSymsp->__Vcoverage[14750]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_1[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14751]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_1[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14752]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14753]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14754]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14755]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14756]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14757]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14758]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14759]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14760]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14761]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14762]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14763]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14764]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14765]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14766]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14767]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14768]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14769]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14770]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14771]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14772]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14773]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14774]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14775]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14776]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14777]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14778]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14779]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14780]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14781]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]))) {
        ++(vlSymsp->__Vcoverage[14782]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_1[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14783]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_1[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14784]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14785]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14786]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14787]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14788]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14789]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14790]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14791]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14792]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14793]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14794]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14795]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14796]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14797]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14798]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14799]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14800]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14801]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14802]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14803]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14804]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14805]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14806]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
}

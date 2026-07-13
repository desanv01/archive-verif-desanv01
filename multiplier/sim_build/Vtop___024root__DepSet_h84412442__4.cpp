// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8020]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8021]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8022]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8023]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8024]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8025]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8026]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8027]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8028]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8029]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8030]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp60[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8031]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp60[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8032]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp60[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8033]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp60[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8034]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp60[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8035]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8036]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8037]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8038]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8039]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8040]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8041]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8042]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8043]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8044]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8045]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8046]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8047]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8048]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8049]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8050]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8051]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8052]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8053]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8054]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8055]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8056]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8057]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8058]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8059]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8060]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8061]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp60[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]))) {
        ++(vlSymsp->__Vcoverage[8062]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp60[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8063]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp60[3U]));
    }
    vlSelfRef.multiplier__DOT__A30__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp61[0U];
    vlSelfRef.multiplier__DOT__A30__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp61[1U];
    vlSelfRef.multiplier__DOT__A30__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp61[2U];
    vlSelfRef.multiplier__DOT__A30__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp61[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp61[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8064]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp61[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8065]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp61[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8066]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp61[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8067]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8068]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8069]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8070]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8071]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8072]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8073]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8074]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8075]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8076]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8077]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8078]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8079]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8080]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8081]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8082]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8083]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8084]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8085]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8086]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8087]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8088]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8089]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8090]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8091]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8092]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8093]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp61[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]))) {
        ++(vlSymsp->__Vcoverage[8094]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp61[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8095]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp61[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp61[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8096]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp61[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8097]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp61[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8098]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp61[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8099]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8100]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8101]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8102]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8103]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8104]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8105]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8106]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8107]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8108]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8109]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8110]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8111]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8112]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8113]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8114]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8115]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8116]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8117]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8118]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8119]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8120]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8121]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8122]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8123]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8124]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8125]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp61[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]))) {
        ++(vlSymsp->__Vcoverage[8126]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp61[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8127]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp61[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp61[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8128]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp61[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8129]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp61[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8130]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp61[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8131]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8132]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8133]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8134]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8135]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8136]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8137]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8138]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8139]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8140]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8141]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8142]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8143]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8144]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8145]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8146]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8147]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8148]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8149]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8150]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8151]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8152]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8153]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8154]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8155]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8156]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8157]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp61[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]))) {
        ++(vlSymsp->__Vcoverage[8158]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp61[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8159]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp61[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp61[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8160]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp61[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8161]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp61[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8162]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp61[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8163]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8164]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8165]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8166]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8167]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8168]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8169]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8170]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8171]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8172]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8173]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8174]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8175]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8176]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8177]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8178]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8179]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8180]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8181]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8182]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8183]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8184]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8185]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8186]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8187]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8188]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8189]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp61[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]))) {
        ++(vlSymsp->__Vcoverage[8190]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp61[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8191]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp61[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp61[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A30__DOT__sum, vlSelfRef.multiplier__DOT__pp60, vlSelfRef.multiplier__DOT__pp61);
    vlSelfRef.multiplier__DOT__A31__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp62[0U];
    vlSelfRef.multiplier__DOT__A31__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp62[1U];
    vlSelfRef.multiplier__DOT__A31__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp62[2U];
    vlSelfRef.multiplier__DOT__A31__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp62[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp62[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8192]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp62[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8193]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp62[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8194]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp62[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8195]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8196]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8197]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8198]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8199]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8200]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8201]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8202]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8203]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8204]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8205]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8206]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8207]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8208]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8209]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8210]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8211]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8212]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8213]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8214]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8215]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8216]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8217]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8218]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8219]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8220]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8221]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp62[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]))) {
        ++(vlSymsp->__Vcoverage[8222]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp62[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8223]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp62[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp62[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8224]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp62[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8225]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp62[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8226]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp62[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8227]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8228]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8229]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8230]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8231]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8232]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8233]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8234]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8235]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8236]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8237]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8238]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8239]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8240]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8241]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8242]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8243]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8244]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8245]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8246]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8247]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8248]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8249]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8250]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8251]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8252]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8253]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp62[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]))) {
        ++(vlSymsp->__Vcoverage[8254]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp62[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8255]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp62[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp62[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp62[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp62[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp62[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp62[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]))) {
        ++(vlSymsp->__Vcoverage[8286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp62[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp62[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp62[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp62[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp62[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp62[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp62[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]))) {
        ++(vlSymsp->__Vcoverage[8318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp62[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp62[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp62[3U]));
    }
    vlSelfRef.multiplier__DOT__A31__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp63[0U];
    vlSelfRef.multiplier__DOT__A31__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp63[1U];
    vlSelfRef.multiplier__DOT__A31__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp63[2U];
    vlSelfRef.multiplier__DOT__A31__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp63[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp63[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp63[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp63[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp63[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp63[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]))) {
        ++(vlSymsp->__Vcoverage[8350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp63[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp63[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp63[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp63[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp63[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp63[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp63[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]))) {
        ++(vlSymsp->__Vcoverage[8382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp63[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp63[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp63[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp63[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp63[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp63[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp63[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]))) {
        ++(vlSymsp->__Vcoverage[8414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp63[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp63[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp63[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp63[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp63[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp63[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp63[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]))) {
        ++(vlSymsp->__Vcoverage[8446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp63[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp63[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp63[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A31__DOT__sum, vlSelfRef.multiplier__DOT__pp62, vlSelfRef.multiplier__DOT__pp63);
    if ((1U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16512]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16513]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16514]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16515]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16516]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16517]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16518]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16519]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16520]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16521]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16522]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16523]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16524]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16525]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16526]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16527]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16528]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16529]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16530]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16531]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16532]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16533]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16534]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16535]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16536]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16537]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16538]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16539]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16540]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16541]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16542]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A0__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16543]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16544]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16545]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16546]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16547]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16548]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16549]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16550]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16551]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16552]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16553]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16554]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16555]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16556]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16557]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16558]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16559]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16560]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16561]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16562]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16563]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16564]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16565]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16566]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16567]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16568]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16569]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16570]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16571]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16572]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16573]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16574]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A0__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16575]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16576]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16577]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16578]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16579]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16580]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16581]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16582]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16583]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16584]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16585]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16586]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16587]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16588]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16589]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16590]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16591]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16592]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16593]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16594]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16595]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16596]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16597]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16598]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16599]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16600]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16601]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16602]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16603]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16604]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16605]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16606]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A0__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16607]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16608]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16609]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16610]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16611]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16612]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16613]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16614]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16615]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16616]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16617]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16618]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16619]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16620]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16621]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16622]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16623]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16624]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16625]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16626]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16627]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16628]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16629]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16630]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16631]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16632]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16633]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16634]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16635]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16636]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16637]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16638]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A0__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16639]);
        vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A0__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A0__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_0[0U] = vlSelfRef.multiplier__DOT__A0__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_0[1U] = vlSelfRef.multiplier__DOT__A0__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_0[2U] = vlSelfRef.multiplier__DOT__A0__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_0[3U] = vlSelfRef.multiplier__DOT__A0__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16640]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16641]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16642]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16643]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16644]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16645]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16646]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16647]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16648]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16649]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16650]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16651]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16652]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16653]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16654]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16655]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16656]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16657]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16658]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16659]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16660]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16661]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16662]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16663]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16664]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16665]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16666]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16667]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16668]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16669]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16670]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A1__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16671]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16672]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16673]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16674]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16675]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16676]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16677]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16678]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16679]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16680]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16681]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16682]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16683]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16684]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16685]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16686]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16687]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16688]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16689]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16690]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16691]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16692]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16693]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16694]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16695]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16696]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16697]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16698]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16699]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16700]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16701]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16702]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A1__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16703]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16704]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16705]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16706]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16707]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16708]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16709]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16710]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16711]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16712]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16713]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16714]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16715]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16716]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16717]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16718]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16719]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16720]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16721]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16722]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16723]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16724]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16725]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16726]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16727]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16728]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16729]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16730]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16731]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16732]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16733]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16734]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A1__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16735]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16736]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16737]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16738]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16739]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16740]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16741]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16742]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16743]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16744]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16745]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16746]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16747]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16748]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16749]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16750]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16751]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16752]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16753]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16754]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16755]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16756]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16757]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16758]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16759]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16760]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16761]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16762]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16763]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16764]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16765]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16766]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A1__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16767]);
        vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A1__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A1__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_1[0U] = vlSelfRef.multiplier__DOT__A1__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_1[1U] = vlSelfRef.multiplier__DOT__A1__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_1[2U] = vlSelfRef.multiplier__DOT__A1__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_1[3U] = vlSelfRef.multiplier__DOT__A1__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A32__DOT__sum, vlSelfRef.multiplier__DOT__A0__DOT__sum, vlSelfRef.multiplier__DOT__A1__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16768]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16769]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16770]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16771]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16772]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16773]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16774]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16775]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16776]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16777]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16778]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16779]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16780]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16781]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16782]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16783]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16784]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16785]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16786]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16787]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16788]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16789]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16790]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16791]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16792]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16793]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16794]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16795]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16796]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16797]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16798]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A2__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16799]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16800]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16801]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16802]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16803]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16804]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16805]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16806]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16807]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16808]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16809]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16810]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16811]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16812]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16813]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16814]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16815]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16816]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16817]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16818]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16819]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16820]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16821]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16822]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16823]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16824]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16825]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16826]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16827]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16828]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16829]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16830]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A2__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16831]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16832]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16833]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16834]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16835]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16836]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16837]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16838]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16839]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16840]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16841]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16842]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16843]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16844]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16845]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16846]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16847]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16848]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16849]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16850]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16851]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16852]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16853]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16854]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16855]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16856]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16857]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16858]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16859]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16860]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16861]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16862]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A2__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16863]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16864]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16865]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16866]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16867]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16868]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16869]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16870]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16871]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16872]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16873]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16874]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16875]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16876]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16877]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16878]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16879]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16880]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16881]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16882]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16883]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16884]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16885]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16886]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16887]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16888]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16889]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16890]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16891]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16892]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16893]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16894]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A2__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16895]);
        vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A2__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A2__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_2[0U] = vlSelfRef.multiplier__DOT__A2__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_2[1U] = vlSelfRef.multiplier__DOT__A2__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_2[2U] = vlSelfRef.multiplier__DOT__A2__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_2[3U] = vlSelfRef.multiplier__DOT__A2__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16896]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16897]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16898]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16899]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16900]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16901]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16902]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16903]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16904]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16905]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16906]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16907]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16908]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16909]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16910]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16911]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16912]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16913]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16914]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16915]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16916]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16917]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16918]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16919]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16920]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16921]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16922]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16923]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16924]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16925]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[16926]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A3__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16927]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16928]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16929]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16930]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16931]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16932]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16933]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16934]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16935]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16936]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16937]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16938]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16939]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16940]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16941]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16942]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16943]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16944]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16945]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16946]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16947]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16948]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16949]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16950]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16951]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16952]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16953]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16954]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16955]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16956]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16957]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[16958]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A3__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16959]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16960]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16961]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16962]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16963]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16964]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16965]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16966]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16967]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16968]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16969]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16970]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16971]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16972]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16973]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16974]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16975]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16976]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16977]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16978]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16979]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16980]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16981]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16982]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16983]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16984]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16985]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16986]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16987]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16988]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16989]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[16990]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A3__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16991]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16992]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16993]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16994]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16995]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16996]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16997]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16998]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[16999]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17000]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17001]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17002]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17003]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17004]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17005]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17006]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17007]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17008]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17009]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17010]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17011]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17012]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17013]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17014]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17015]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17016]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17017]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17018]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17019]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17020]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17021]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17022]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A3__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17023]);
        vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A3__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A3__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_3[0U] = vlSelfRef.multiplier__DOT__A3__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_3[1U] = vlSelfRef.multiplier__DOT__A3__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_3[2U] = vlSelfRef.multiplier__DOT__A3__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_3[3U] = vlSelfRef.multiplier__DOT__A3__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A33__DOT__sum, vlSelfRef.multiplier__DOT__A2__DOT__sum, vlSelfRef.multiplier__DOT__A3__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17024]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17025]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17026]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17027]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17028]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17029]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17030]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17031]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17032]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17033]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17034]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17035]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17036]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17037]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17038]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17039]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17040]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17041]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17042]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17043]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17044]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17045]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17046]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17047]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17048]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17049]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17050]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17051]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17052]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17053]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17054]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A4__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17055]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17056]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17057]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17058]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17059]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17060]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17061]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17062]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17063]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17064]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17065]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17066]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17067]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17068]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17069]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17070]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17071]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17072]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17073]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17074]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17075]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17076]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17077]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17078]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17079]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17080]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17081]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17082]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17083]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17084]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17085]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17086]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A4__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17087]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17088]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17089]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17090]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17091]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17092]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17093]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17094]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17095]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17096]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17097]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17098]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17099]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17100]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17101]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17102]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17103]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17104]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17105]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17106]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17107]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17108]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17109]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17110]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17111]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17112]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17113]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17114]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17115]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17116]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17117]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17118]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A4__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17119]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17120]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17121]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17122]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17123]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17124]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17125]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17126]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17127]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17128]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17129]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17130]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17131]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17132]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17133]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17134]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17135]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17136]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17137]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17138]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17139]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17140]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17141]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17142]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17143]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17144]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17145]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17146]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17147]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17148]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17149]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17150]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A4__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17151]);
        vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A4__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A4__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_4[0U] = vlSelfRef.multiplier__DOT__A4__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_4[1U] = vlSelfRef.multiplier__DOT__A4__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_4[2U] = vlSelfRef.multiplier__DOT__A4__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_4[3U] = vlSelfRef.multiplier__DOT__A4__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17152]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17153]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17154]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17155]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17156]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17157]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17158]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17159]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17160]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17161]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17162]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17163]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17164]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17165]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17166]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17167]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17168]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17169]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17170]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17171]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17172]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17173]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17174]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17175]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17176]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17177]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17178]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17179]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17180]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17181]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17182]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A5__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17183]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17184]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17185]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17186]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17187]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17188]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17189]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17190]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17191]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17192]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17193]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17194]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17195]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17196]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17197]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17198]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17199]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17200]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17201]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17202]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17203]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17204]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17205]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17206]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17207]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17208]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17209]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17210]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17211]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17212]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17213]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17214]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A5__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17215]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17216]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17217]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17218]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17219]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17220]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17221]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17222]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17223]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17224]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17225]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17226]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17227]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17228]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17229]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17230]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17231]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17232]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17233]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17234]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17235]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17236]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17237]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17238]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17239]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17240]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17241]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17242]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17243]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17244]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17245]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17246]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A5__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17247]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17248]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17249]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17250]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17251]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17252]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17253]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17254]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17255]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17256]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17257]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17258]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17259]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17260]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17261]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17262]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17263]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17264]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17265]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17266]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17267]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17268]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17269]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17270]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17271]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17272]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17273]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17274]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17275]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17276]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17277]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17278]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A5__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17279]);
        vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A5__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A5__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_5[0U] = vlSelfRef.multiplier__DOT__A5__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_5[1U] = vlSelfRef.multiplier__DOT__A5__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_5[2U] = vlSelfRef.multiplier__DOT__A5__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_5[3U] = vlSelfRef.multiplier__DOT__A5__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A34__DOT__sum, vlSelfRef.multiplier__DOT__A4__DOT__sum, vlSelfRef.multiplier__DOT__A5__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17280]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17281]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17282]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17283]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17284]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17285]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17286]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17287]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17288]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17289]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17290]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17291]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17292]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17293]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17294]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17295]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17296]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17297]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17298]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17299]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17300]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17301]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17302]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17303]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17304]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17305]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17306]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17307]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17308]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17309]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17310]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A6__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17311]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17312]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17313]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17314]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17315]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17316]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17317]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17318]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17319]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17320]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17321]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17322]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17323]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17324]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17325]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17326]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17327]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17328]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17329]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17330]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17331]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17332]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17333]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17334]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17335]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17336]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17337]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17338]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17339]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17340]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17341]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17342]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A6__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17343]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17344]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17345]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17346]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17347]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17348]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17349]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17350]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17351]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17352]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17353]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17354]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17355]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17356]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17357]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17358]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17359]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17360]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17361]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17362]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17363]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17364]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17365]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17366]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17367]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17368]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17369]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17370]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17371]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17372]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17373]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17374]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A6__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17375]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17376]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17377]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17378]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17379]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17380]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17381]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17382]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17383]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17384]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17385]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17386]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17387]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17388]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17389]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17390]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17391]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17392]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17393]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17394]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17395]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17396]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17397]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17398]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17399]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17400]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17401]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17402]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17403]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17404]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17405]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17406]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A6__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17407]);
        vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A6__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A6__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_6[0U] = vlSelfRef.multiplier__DOT__A6__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_6[1U] = vlSelfRef.multiplier__DOT__A6__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_6[2U] = vlSelfRef.multiplier__DOT__A6__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_6[3U] = vlSelfRef.multiplier__DOT__A6__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17408]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17409]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17410]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17411]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17412]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17413]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17414]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17415]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17416]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17417]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17418]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17419]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17420]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17421]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17422]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17423]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17424]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17425]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17426]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17427]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17428]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17429]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17430]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17431]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17432]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17433]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17434]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17435]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17436]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17437]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17438]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A7__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17439]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17440]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17441]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17442]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17443]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17444]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17445]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17446]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17447]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17448]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17449]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17450]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17451]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17452]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17453]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17454]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17455]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17456]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17457]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17458]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17459]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17460]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17461]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17462]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17463]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17464]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17465]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17466]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17467]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17468]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17469]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17470]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A7__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17471]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17472]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17473]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17474]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17475]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17476]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17477]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17478]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17479]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17480]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17481]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17482]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17483]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17484]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17485]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17486]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17487]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17488]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17489]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17490]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17491]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17492]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17493]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17494]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17495]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17496]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17497]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17498]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17499]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17500]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17501]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17502]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A7__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17503]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17504]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17505]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17506]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17507]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17508]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17509]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17510]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17511]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17512]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17513]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17514]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17515]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17516]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17517]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17518]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17519]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17520]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17521]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17522]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17523]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17524]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17525]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17526]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17527]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17528]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17529]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17530]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17531]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17532]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17533]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17534]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A7__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17535]);
        vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A7__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A7__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_7[0U] = vlSelfRef.multiplier__DOT__A7__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_7[1U] = vlSelfRef.multiplier__DOT__A7__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_7[2U] = vlSelfRef.multiplier__DOT__A7__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_7[3U] = vlSelfRef.multiplier__DOT__A7__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A35__DOT__sum, vlSelfRef.multiplier__DOT__A6__DOT__sum, vlSelfRef.multiplier__DOT__A7__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17536]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17537]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17538]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17539]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17540]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17541]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17542]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17543]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17544]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17545]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17546]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17547]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17548]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17549]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17550]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17551]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17552]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17553]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17554]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17555]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17556]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17557]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17558]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17559]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17560]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17561]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17562]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17563]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17564]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17565]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17566]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A8__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17567]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17568]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17569]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17570]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17571]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17572]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17573]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17574]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17575]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17576]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17577]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17578]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17579]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17580]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17581]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17582]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17583]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17584]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17585]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17586]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17587]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17588]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17589]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17590]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17591]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17592]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17593]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17594]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17595]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17596]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17597]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17598]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A8__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17599]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17600]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17601]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17602]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17603]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17604]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17605]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17606]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17607]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17608]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17609]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17610]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17611]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17612]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17613]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17614]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17615]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17616]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17617]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17618]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17619]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17620]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17621]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17622]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17623]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17624]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17625]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17626]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17627]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17628]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17629]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17630]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A8__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17631]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17632]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17633]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17634]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17635]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17636]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17637]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17638]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17639]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17640]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17641]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17642]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17643]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17644]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17645]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17646]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17647]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17648]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17649]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17650]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17651]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17652]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17653]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17654]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17655]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17656]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17657]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17658]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17659]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17660]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17661]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17662]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A8__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17663]);
        vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A8__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A8__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_8[0U] = vlSelfRef.multiplier__DOT__A8__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_8[1U] = vlSelfRef.multiplier__DOT__A8__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_8[2U] = vlSelfRef.multiplier__DOT__A8__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_8[3U] = vlSelfRef.multiplier__DOT__A8__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17664]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17665]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17666]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17667]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17668]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17669]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17670]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17671]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17672]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17673]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17674]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17675]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17676]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17677]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17678]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17679]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17680]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17681]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17682]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17683]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17684]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17685]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17686]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17687]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17688]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17689]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17690]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17691]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17692]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17693]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17694]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A9__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17695]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17696]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17697]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17698]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17699]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17700]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17701]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17702]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17703]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17704]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17705]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17706]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17707]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17708]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17709]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17710]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17711]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17712]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17713]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17714]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17715]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17716]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17717]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17718]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17719]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17720]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17721]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17722]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17723]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17724]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17725]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17726]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A9__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17727]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17728]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17729]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17730]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17731]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17732]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17733]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17734]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17735]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17736]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17737]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17738]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17739]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17740]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17741]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17742]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17743]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17744]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17745]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17746]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17747]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17748]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17749]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17750]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17751]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17752]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17753]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17754]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17755]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17756]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17757]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17758]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A9__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17759]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17760]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17761]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17762]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17763]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17764]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17765]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17766]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17767]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17768]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17769]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17770]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17771]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17772]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17773]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17774]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17775]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17776]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17777]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17778]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17779]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17780]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17781]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17782]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17783]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17784]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17785]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17786]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17787]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17788]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17789]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17790]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A9__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17791]);
        vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A9__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A9__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_9[0U] = vlSelfRef.multiplier__DOT__A9__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_9[1U] = vlSelfRef.multiplier__DOT__A9__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_9[2U] = vlSelfRef.multiplier__DOT__A9__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_9[3U] = vlSelfRef.multiplier__DOT__A9__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A36__DOT__sum, vlSelfRef.multiplier__DOT__A8__DOT__sum, vlSelfRef.multiplier__DOT__A9__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17792]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17793]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17794]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17795]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17796]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17797]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17798]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17799]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17800]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17801]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17802]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17803]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17804]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17805]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17806]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17807]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17808]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17809]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17810]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17811]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17812]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17813]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17814]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17815]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17816]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17817]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17818]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17819]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17820]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17821]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17822]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A10__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17823]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17824]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17825]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17826]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17827]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17828]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17829]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17830]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17831]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17832]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17833]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17834]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17835]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17836]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17837]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17838]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17839]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17840]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17841]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17842]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17843]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17844]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17845]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17846]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17847]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17848]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17849]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17850]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17851]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17852]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17853]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17854]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A10__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17855]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17856]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17857]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17858]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17859]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17860]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17861]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17862]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17863]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17864]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17865]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17866]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17867]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17868]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17869]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17870]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17871]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17872]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17873]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17874]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17875]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17876]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17877]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17878]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17879]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17880]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17881]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17882]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17883]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17884]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17885]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17886]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A10__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17887]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17888]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17889]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17890]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17891]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17892]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17893]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17894]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17895]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17896]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17897]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17898]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17899]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17900]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17901]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17902]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17903]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17904]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17905]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17906]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17907]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17908]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17909]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17910]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17911]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17912]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17913]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17914]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17915]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17916]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17917]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[17918]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A10__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17919]);
        vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A10__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A10__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_10[0U] = vlSelfRef.multiplier__DOT__A10__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_10[1U] = vlSelfRef.multiplier__DOT__A10__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_10[2U] = vlSelfRef.multiplier__DOT__A10__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_10[3U] = vlSelfRef.multiplier__DOT__A10__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17920]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17921]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17922]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17923]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17924]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17925]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17926]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17927]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17928]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17929]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17930]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17931]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17932]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17933]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17934]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17935]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17936]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17937]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17938]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17939]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17940]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17941]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17942]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17943]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17944]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17945]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17946]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17947]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17948]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17949]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[17950]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A11__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17951]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17952]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17953]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17954]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17955]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17956]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17957]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17958]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17959]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17960]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17961]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17962]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17963]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17964]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17965]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17966]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17967]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17968]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17969]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17970]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17971]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17972]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17973]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17974]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17975]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17976]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17977]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17978]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17979]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17980]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17981]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[17982]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A11__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[17983]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17984]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17985]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17986]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17987]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17988]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17989]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17990]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17991]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17992]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17993]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17994]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17995]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17996]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17997]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17998]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[17999]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18000]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18001]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18002]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18003]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18004]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18005]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18006]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18007]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18008]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18009]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18010]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18011]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18012]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18013]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18014]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A11__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18015]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18016]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18017]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18018]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18019]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18020]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18021]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18022]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18023]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18024]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18025]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18026]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18027]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18028]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18029]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18030]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18031]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18032]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18033]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18034]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18035]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18036]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18037]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18038]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18039]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18040]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18041]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18042]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18043]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18044]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18045]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18046]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A11__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18047]);
        vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A11__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A11__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_11[0U] = vlSelfRef.multiplier__DOT__A11__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_11[1U] = vlSelfRef.multiplier__DOT__A11__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_11[2U] = vlSelfRef.multiplier__DOT__A11__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_11[3U] = vlSelfRef.multiplier__DOT__A11__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A37__DOT__sum, vlSelfRef.multiplier__DOT__A10__DOT__sum, vlSelfRef.multiplier__DOT__A11__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18048]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18049]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18050]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18051]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18052]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18053]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18054]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18055]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18056]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18057]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18058]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18059]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18060]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18061]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18062]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18063]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18064]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18065]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18066]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18067]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18068]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18069]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18070]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18071]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18072]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18073]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18074]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18075]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
}

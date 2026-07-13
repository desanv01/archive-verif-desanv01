// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21038]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21039]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21040]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21041]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21042]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21043]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21044]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21045]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21046]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21047]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21048]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21049]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21050]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21051]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21052]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21053]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21054]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21055]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21056]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21057]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21058]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21059]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21060]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21061]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21062]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21063]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21064]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21065]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21066]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21067]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21068]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21069]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21070]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21071]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21072]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21073]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21074]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21075]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21076]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21077]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21078]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21079]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21080]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21081]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21082]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21083]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21084]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21085]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21086]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A35__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21087]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21088]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21089]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21090]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21091]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21092]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21093]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21094]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21095]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21096]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21097]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21098]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21099]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21100]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21101]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21102]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21103]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21104]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21105]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21106]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21107]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21108]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21109]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21110]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21111]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21112]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21113]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21114]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21115]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21116]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21117]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21118]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A35__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21119]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_3[0U] = vlSelfRef.multiplier__DOT__A35__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_3[1U] = vlSelfRef.multiplier__DOT__A35__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_3[2U] = vlSelfRef.multiplier__DOT__A35__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_3[3U] = vlSelfRef.multiplier__DOT__A35__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A49__DOT__sum, vlSelfRef.multiplier__DOT__A34__DOT__sum, vlSelfRef.multiplier__DOT__A35__DOT__sum);
    vlSelfRef.multiplier__DOT__A36__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_8[0U];
    vlSelfRef.multiplier__DOT__A36__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_8[1U];
    vlSelfRef.multiplier__DOT__A36__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_8[2U];
    vlSelfRef.multiplier__DOT__A36__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_8[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9472]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9473]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9474]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9475]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9476]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9477]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9478]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9479]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9480]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9481]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9482]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9483]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9484]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9485]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9486]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9487]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9488]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9489]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9490]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9491]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9492]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9493]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9494]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9495]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9496]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9497]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9498]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9499]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9500]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9501]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]))) {
        ++(vlSymsp->__Vcoverage[9502]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_8[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9503]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_8[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9504]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9505]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9506]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9507]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9508]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9509]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9510]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9511]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9512]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9513]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9514]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9515]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9516]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9517]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9518]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9519]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9520]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9521]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9522]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9523]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9524]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9525]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9526]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9527]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9528]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9529]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9530]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9531]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9532]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9533]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]))) {
        ++(vlSymsp->__Vcoverage[9534]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_8[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9535]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_8[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9536]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9537]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9538]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9539]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9540]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9541]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9542]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9543]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9544]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9545]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9546]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9547]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9548]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9549]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9550]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9551]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9552]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9553]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9554]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9555]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9556]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9557]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9558]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9559]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9560]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9561]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9562]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9563]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9564]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9565]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]))) {
        ++(vlSymsp->__Vcoverage[9566]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_8[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9567]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_8[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9568]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9569]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9570]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9571]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9572]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9573]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9574]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9575]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9576]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9577]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9578]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9579]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9580]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9581]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9582]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9583]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9584]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9585]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9586]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9587]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9588]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9589]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9590]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9591]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9592]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9593]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9594]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9595]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9596]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9597]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]))) {
        ++(vlSymsp->__Vcoverage[9598]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_8[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9599]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_8[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_8[3U]));
    }
    vlSelfRef.multiplier__DOT__A36__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_9[0U];
    vlSelfRef.multiplier__DOT__A36__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_9[1U];
    vlSelfRef.multiplier__DOT__A36__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_9[2U];
    vlSelfRef.multiplier__DOT__A36__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_9[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9600]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9601]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9602]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9603]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9604]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9605]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9606]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9607]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9608]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9609]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9610]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9611]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9612]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9613]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9614]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9615]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9616]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9617]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9618]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9619]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9620]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9621]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9622]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9623]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9624]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9625]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9626]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9627]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9628]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9629]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]))) {
        ++(vlSymsp->__Vcoverage[9630]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_9[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9631]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_9[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9632]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9633]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9634]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9635]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9636]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9637]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9638]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9639]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9640]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9641]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9642]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9643]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9644]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9645]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9646]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9647]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9648]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9649]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9650]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9651]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9652]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9653]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9654]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9655]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9656]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9657]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9658]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9659]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9660]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9661]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]))) {
        ++(vlSymsp->__Vcoverage[9662]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_9[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9663]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_9[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9664]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9665]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9666]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9667]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9668]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9669]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9670]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9671]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9672]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9673]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9674]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9675]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9676]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9677]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9678]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9679]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9680]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9681]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9682]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9683]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9684]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9685]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9686]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9687]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9688]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9689]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9690]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9691]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9692]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9693]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]))) {
        ++(vlSymsp->__Vcoverage[9694]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_9[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9695]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_9[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9696]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9697]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9698]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9699]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9700]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9701]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9702]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9703]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9704]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9705]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9706]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9707]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9708]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9709]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9710]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9711]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9712]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9713]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9714]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9715]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9716]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9717]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9718]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9719]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9720]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9721]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9722]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9723]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9724]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9725]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]))) {
        ++(vlSymsp->__Vcoverage[9726]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_9[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9727]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_9[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_9[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21120]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21121]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21122]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21123]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21124]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21125]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21126]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21127]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21128]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21129]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21130]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21131]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21132]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21133]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21134]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21135]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21136]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21137]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21138]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21139]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21140]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21141]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21142]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21143]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21144]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21145]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21146]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21147]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21148]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21149]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21150]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A36__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21151]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21152]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21153]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21154]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21155]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21156]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21157]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21158]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21159]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21160]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21161]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21162]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21163]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21164]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21165]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21166]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21167]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21168]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21169]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21170]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21171]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21172]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21173]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21174]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21175]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21176]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21177]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21178]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21179]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21180]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21181]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21182]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A36__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21183]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21184]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21185]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21186]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21187]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21188]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21189]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21190]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21191]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21192]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21193]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21194]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21195]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21196]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21197]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21198]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21199]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21200]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21201]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21202]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21203]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21204]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21205]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21206]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21207]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21208]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21209]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21210]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21211]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21212]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21213]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21214]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A36__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21215]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21216]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21217]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21218]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21219]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21220]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21221]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21222]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21223]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21224]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21225]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21226]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21227]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21228]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21229]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21230]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21231]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21232]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21233]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21234]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21235]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21236]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21237]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21238]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21239]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21240]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21241]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21242]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21243]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21244]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21245]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21246]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A36__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21247]);
        vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A36__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A36__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_4[0U] = vlSelfRef.multiplier__DOT__A36__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_4[1U] = vlSelfRef.multiplier__DOT__A36__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_4[2U] = vlSelfRef.multiplier__DOT__A36__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_4[3U] = vlSelfRef.multiplier__DOT__A36__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A37__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_10[0U];
    vlSelfRef.multiplier__DOT__A37__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_10[1U];
    vlSelfRef.multiplier__DOT__A37__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_10[2U];
    vlSelfRef.multiplier__DOT__A37__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_10[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9728]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9729]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9730]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9731]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9732]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9733]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9734]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9735]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9736]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9737]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9738]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9739]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9740]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9741]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9742]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9743]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9744]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9745]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9746]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9747]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9748]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9749]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9750]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9751]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9752]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9753]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9754]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9755]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9756]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9757]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]))) {
        ++(vlSymsp->__Vcoverage[9758]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_10[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9759]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_10[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9760]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9761]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9762]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9763]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9764]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9765]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9766]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9767]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9768]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9769]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9770]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9771]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9772]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9773]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9774]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9775]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9776]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9777]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9778]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9779]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9780]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9781]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9782]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9783]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9784]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9785]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9786]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9787]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9788]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9789]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]))) {
        ++(vlSymsp->__Vcoverage[9790]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_10[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9791]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_10[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9792]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9793]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9794]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9795]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9796]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9797]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9798]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9799]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9800]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9801]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9802]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9803]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9804]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9805]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9806]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9807]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9808]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9809]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9810]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9811]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9812]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9813]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9814]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9815]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9816]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9817]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9818]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9819]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9820]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9821]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]))) {
        ++(vlSymsp->__Vcoverage[9822]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_10[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9823]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_10[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9824]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9825]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9826]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9827]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9828]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9829]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9830]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9831]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9832]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9833]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9834]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9835]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9836]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9837]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9838]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9839]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9840]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9841]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9842]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9843]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9844]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9845]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9846]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9847]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9848]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9849]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9850]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9851]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9852]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9853]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]))) {
        ++(vlSymsp->__Vcoverage[9854]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_10[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9855]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_10[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_10[3U]));
    }
    vlSelfRef.multiplier__DOT__A37__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_11[0U];
    vlSelfRef.multiplier__DOT__A37__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_11[1U];
    vlSelfRef.multiplier__DOT__A37__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_11[2U];
    vlSelfRef.multiplier__DOT__A37__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_11[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9856]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9857]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9858]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9859]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9860]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9861]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9862]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9863]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9864]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9865]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9866]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9867]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9868]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9869]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9870]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9871]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9872]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9873]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9874]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9875]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9876]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9877]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9878]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9879]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9880]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9881]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9882]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9883]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9884]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9885]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]))) {
        ++(vlSymsp->__Vcoverage[9886]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_11[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9887]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_11[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9888]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9889]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9890]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9891]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9892]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9893]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9894]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9895]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9896]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9897]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9898]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9899]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9900]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9901]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9902]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9903]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9904]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9905]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9906]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9907]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9908]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9909]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9910]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9911]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9912]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9913]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9914]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9915]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9916]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9917]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]))) {
        ++(vlSymsp->__Vcoverage[9918]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_11[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9919]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_11[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9920]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9921]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9922]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9923]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9924]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9925]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9926]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9927]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9928]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9929]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9930]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9931]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9932]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9933]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9934]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9935]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9936]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9937]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9938]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9939]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9940]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9941]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9942]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9943]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9944]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9945]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9946]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9947]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9948]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9949]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]))) {
        ++(vlSymsp->__Vcoverage[9950]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_11[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9951]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_11[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9952]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9953]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9954]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9955]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9956]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9957]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9958]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9959]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9960]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9961]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9962]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9963]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9964]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9965]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9966]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9967]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9968]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9969]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9970]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9971]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9972]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9973]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9974]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9975]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9976]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9977]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9978]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9979]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9980]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9981]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]))) {
        ++(vlSymsp->__Vcoverage[9982]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_11[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9983]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_11[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_11[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21248]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21249]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21250]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21251]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21252]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21253]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21254]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21255]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21256]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21257]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21258]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21259]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21260]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21261]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21262]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21263]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21264]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21265]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21266]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21267]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21268]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21269]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21270]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21271]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21272]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21273]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21274]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21275]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21276]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21277]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21278]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A37__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21279]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21280]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21281]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21282]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21283]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21284]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21285]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21286]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21287]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21288]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21289]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21290]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21291]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21292]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21293]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21294]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21295]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21296]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21297]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21298]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21299]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21300]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21301]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21302]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21303]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21304]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21305]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21306]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21307]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21308]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21309]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21310]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A37__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21311]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21312]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21313]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21314]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21315]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21316]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21317]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21318]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21319]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21320]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21321]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21322]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21323]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21324]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21325]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21326]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21327]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21328]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21329]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21330]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21331]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21332]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21333]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21334]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21335]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21336]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21337]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21338]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21339]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21340]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21341]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21342]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A37__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21343]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21344]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21345]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21346]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21347]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21348]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21349]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21350]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21351]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21352]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21353]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21354]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21355]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21356]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21357]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21358]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21359]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21360]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21361]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21362]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21363]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21364]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21365]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21366]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21367]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21368]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21369]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21370]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21371]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21372]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21373]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21374]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A37__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21375]);
        vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A37__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A37__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_5[0U] = vlSelfRef.multiplier__DOT__A37__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_5[1U] = vlSelfRef.multiplier__DOT__A37__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_5[2U] = vlSelfRef.multiplier__DOT__A37__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_5[3U] = vlSelfRef.multiplier__DOT__A37__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A50__DOT__sum, vlSelfRef.multiplier__DOT__A36__DOT__sum, vlSelfRef.multiplier__DOT__A37__DOT__sum);
    vlSelfRef.multiplier__DOT__A38__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_12[0U];
    vlSelfRef.multiplier__DOT__A38__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_12[1U];
    vlSelfRef.multiplier__DOT__A38__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_12[2U];
    vlSelfRef.multiplier__DOT__A38__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_12[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9984]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9985]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9986]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9987]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9988]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9989]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9990]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9991]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9992]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9993]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9994]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9995]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9996]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9997]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9998]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[9999]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10000]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10001]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10002]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10003]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10004]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10005]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10006]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10007]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10008]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10009]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10010]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10011]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10012]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10013]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]))) {
        ++(vlSymsp->__Vcoverage[10014]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_12[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10015]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_12[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10016]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10017]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10018]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10019]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10020]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10021]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10022]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10023]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10024]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10025]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10026]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10027]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10028]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10029]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10030]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10031]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10032]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10033]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10034]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10035]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10036]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10037]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10038]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10039]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10040]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10041]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10042]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10043]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10044]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10045]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]))) {
        ++(vlSymsp->__Vcoverage[10046]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_12[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10047]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_12[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10048]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10049]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10050]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10051]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10052]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10053]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10054]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10055]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10056]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10057]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10058]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10059]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10060]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10061]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10062]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10063]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10064]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10065]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10066]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10067]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10068]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10069]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10070]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10071]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10072]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10073]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10074]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10075]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10076]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10077]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]))) {
        ++(vlSymsp->__Vcoverage[10078]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_12[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10079]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_12[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10080]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10081]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10082]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10083]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10084]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10085]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10086]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10087]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10088]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10089]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10090]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10091]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10092]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10093]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10094]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10095]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10096]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10097]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10098]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10099]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10100]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10101]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10102]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10103]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10104]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10105]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10106]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10107]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10108]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10109]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]))) {
        ++(vlSymsp->__Vcoverage[10110]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_12[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10111]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_12[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_12[3U]));
    }
    vlSelfRef.multiplier__DOT__A38__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_13[0U];
    vlSelfRef.multiplier__DOT__A38__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_13[1U];
    vlSelfRef.multiplier__DOT__A38__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_13[2U];
    vlSelfRef.multiplier__DOT__A38__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_13[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10112]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10113]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10114]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10115]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10116]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10117]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10118]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10119]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10120]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10121]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10122]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10123]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10124]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10125]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10126]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10127]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10128]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10129]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10130]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10131]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10132]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10133]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10134]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10135]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10136]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10137]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10138]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10139]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10140]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10141]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]))) {
        ++(vlSymsp->__Vcoverage[10142]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_13[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10143]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_13[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10144]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10145]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10146]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10147]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10148]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10149]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10150]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10151]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10152]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10153]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10154]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10155]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10156]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10157]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10158]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10159]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10160]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10161]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10162]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10163]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10164]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10165]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10166]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10167]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10168]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10169]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10170]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10171]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10172]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10173]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]))) {
        ++(vlSymsp->__Vcoverage[10174]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_13[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10175]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_13[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10176]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10177]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10178]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10179]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10180]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10181]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10182]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10183]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10184]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10185]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10186]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10187]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10188]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10189]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10190]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10191]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10192]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10193]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10194]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10195]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10196]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10197]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10198]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10199]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10200]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10201]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10202]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10203]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10204]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10205]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]))) {
        ++(vlSymsp->__Vcoverage[10206]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_13[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10207]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_13[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10208]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10209]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10210]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10211]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10212]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10213]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10214]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10215]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10216]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10217]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10218]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10219]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10220]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10221]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10222]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10223]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10224]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10225]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10226]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10227]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10228]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10229]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10230]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10231]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10232]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10233]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10234]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10235]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10236]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10237]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]))) {
        ++(vlSymsp->__Vcoverage[10238]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_13[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10239]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_13[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_13[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21376]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21377]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21378]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21379]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21380]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21381]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21382]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21383]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21384]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21385]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21386]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21387]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21388]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21389]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21390]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21391]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21392]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21393]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21394]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21395]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21396]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21397]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21398]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21399]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21400]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21401]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21402]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21403]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21404]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21405]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21406]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A38__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21407]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21408]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21409]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21410]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21411]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21412]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21413]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21414]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21415]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21416]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21417]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21418]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21419]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21420]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21421]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21422]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21423]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21424]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21425]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21426]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21427]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21428]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21429]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21430]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21431]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21432]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21433]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21434]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21435]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21436]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21437]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21438]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A38__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21439]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21440]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21441]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21442]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21443]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21444]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21445]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21446]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21447]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21448]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21449]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21450]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21451]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21452]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21453]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21454]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21455]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21456]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21457]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21458]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21459]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21460]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21461]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21462]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21463]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21464]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21465]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21466]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21467]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21468]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21469]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21470]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A38__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21471]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21472]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21473]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21474]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21475]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21476]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21477]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21478]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21479]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21480]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21481]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21482]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21483]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21484]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21485]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21486]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21487]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21488]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21489]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21490]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21491]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21492]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21493]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21494]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21495]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21496]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21497]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21498]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21499]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21500]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21501]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21502]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A38__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21503]);
        vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A38__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A38__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_6[0U] = vlSelfRef.multiplier__DOT__A38__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_6[1U] = vlSelfRef.multiplier__DOT__A38__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_6[2U] = vlSelfRef.multiplier__DOT__A38__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_6[3U] = vlSelfRef.multiplier__DOT__A38__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A39__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_14[0U];
    vlSelfRef.multiplier__DOT__A39__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_14[1U];
    vlSelfRef.multiplier__DOT__A39__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_14[2U];
    vlSelfRef.multiplier__DOT__A39__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_14[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10240]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10241]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10242]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10243]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10244]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10245]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10246]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10247]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10248]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10249]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10250]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10251]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10252]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10253]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10254]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10255]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10256]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10257]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10258]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10259]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10260]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10261]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10262]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10263]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10264]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10265]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10266]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10267]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10268]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10269]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]))) {
        ++(vlSymsp->__Vcoverage[10270]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_14[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10271]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_14[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10272]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10273]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10274]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10275]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10276]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10277]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10278]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10279]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10280]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10281]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10282]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10283]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10284]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10285]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10286]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10287]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10288]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10289]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10290]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10291]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10292]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10293]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10294]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10295]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10296]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10297]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10298]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10299]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10300]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10301]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]))) {
        ++(vlSymsp->__Vcoverage[10302]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_14[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10303]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_14[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10304]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10305]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10306]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10307]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10308]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10309]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10310]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10311]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10312]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10313]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10314]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10315]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10316]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10317]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10318]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10319]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10320]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10321]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10322]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10323]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10324]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10325]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10326]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10327]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10328]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10329]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10330]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10331]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10332]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10333]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]))) {
        ++(vlSymsp->__Vcoverage[10334]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_14[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10335]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_14[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10336]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10337]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10338]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10339]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10340]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10341]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10342]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10343]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10344]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10345]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10346]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10347]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10348]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10349]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10350]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10351]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10352]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10353]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10354]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10355]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10356]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10357]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10358]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10359]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10360]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10361]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10362]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10363]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10364]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10365]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]))) {
        ++(vlSymsp->__Vcoverage[10366]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_14[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10367]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_14[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_14[3U]));
    }
    vlSelfRef.multiplier__DOT__A39__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_15[0U];
    vlSelfRef.multiplier__DOT__A39__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_15[1U];
    vlSelfRef.multiplier__DOT__A39__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_15[2U];
    vlSelfRef.multiplier__DOT__A39__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_15[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10368]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10369]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10370]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10371]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10372]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10373]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10374]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10375]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10376]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10377]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10378]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10379]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10380]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10381]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10382]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10383]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10384]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10385]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10386]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10387]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10388]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10389]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10390]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10391]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10392]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10393]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10394]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10395]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10396]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10397]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]))) {
        ++(vlSymsp->__Vcoverage[10398]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_15[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10399]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_15[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10400]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10401]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10402]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10403]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10404]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10405]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10406]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10407]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10408]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10409]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10410]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10411]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10412]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10413]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10414]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10415]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10416]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10417]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10418]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10419]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10420]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10421]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10422]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10423]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10424]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10425]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10426]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10427]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10428]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10429]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]))) {
        ++(vlSymsp->__Vcoverage[10430]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_15[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10431]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_15[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10432]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10433]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10434]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10435]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10436]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10437]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10438]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10439]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10440]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10441]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10442]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10443]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10444]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10445]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10446]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10447]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10448]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10449]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10450]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10451]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10452]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10453]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10454]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10455]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10456]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10457]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10458]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10459]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10460]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10461]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]))) {
        ++(vlSymsp->__Vcoverage[10462]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_15[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10463]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_15[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10464]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10465]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10466]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10467]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10468]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10469]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10470]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10471]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10472]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10473]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10474]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10475]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10476]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10477]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10478]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10479]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10480]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10481]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10482]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10483]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10484]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10485]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10486]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10487]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10488]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10489]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10490]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10491]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10492]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10493]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]))) {
        ++(vlSymsp->__Vcoverage[10494]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_15[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10495]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_15[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_15[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21504]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21505]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21506]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21507]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21508]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21509]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21510]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21511]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21512]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21513]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21514]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21515]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21516]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21517]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21518]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21519]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21520]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21521]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21522]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21523]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21524]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21525]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21526]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21527]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21528]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21529]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21530]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21531]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21532]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21533]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21534]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A39__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21535]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21536]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21537]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21538]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21539]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21540]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21541]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21542]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21543]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21544]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21545]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21546]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21547]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21548]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21549]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21550]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21551]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21552]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21553]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21554]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21555]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21556]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21557]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21558]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21559]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21560]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21561]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21562]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21563]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21564]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21565]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21566]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A39__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21567]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21568]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21569]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21570]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21571]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21572]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21573]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21574]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21575]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21576]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21577]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21578]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21579]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21580]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21581]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21582]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21583]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21584]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21585]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21586]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21587]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21588]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21589]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21590]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21591]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21592]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21593]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21594]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21595]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21596]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21597]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21598]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A39__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21599]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21600]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21601]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21602]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21603]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21604]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21605]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21606]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21607]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21608]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21609]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21610]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21611]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21612]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21613]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21614]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21615]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21616]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21617]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21618]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21619]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21620]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21621]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21622]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21623]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21624]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21625]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21626]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21627]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21628]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21629]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21630]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A39__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21631]);
        vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A39__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A39__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_7[0U] = vlSelfRef.multiplier__DOT__A39__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_7[1U] = vlSelfRef.multiplier__DOT__A39__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_7[2U] = vlSelfRef.multiplier__DOT__A39__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_7[3U] = vlSelfRef.multiplier__DOT__A39__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A51__DOT__sum, vlSelfRef.multiplier__DOT__A38__DOT__sum, vlSelfRef.multiplier__DOT__A39__DOT__sum);
    vlSelfRef.multiplier__DOT__A40__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_16[0U];
    vlSelfRef.multiplier__DOT__A40__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_16[1U];
    vlSelfRef.multiplier__DOT__A40__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_16[2U];
    vlSelfRef.multiplier__DOT__A40__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_16[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10496]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10497]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10498]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10499]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10500]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10501]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10502]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10503]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10504]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10505]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10506]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10507]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10508]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10509]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10510]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10511]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10512]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10513]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10514]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10515]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10516]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10517]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10518]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10519]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10520]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10521]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10522]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10523]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10524]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10525]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_16[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]))) {
        ++(vlSymsp->__Vcoverage[10526]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_16[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10527]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_16[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10528]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10529]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10530]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10531]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10532]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10533]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10534]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10535]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10536]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10537]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10538]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10539]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10540]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10541]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10542]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10543]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10544]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10545]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10546]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10547]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10548]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10549]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10550]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10551]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10552]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10553]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10554]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10555]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10556]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10557]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_16[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]))) {
        ++(vlSymsp->__Vcoverage[10558]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_16[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10559]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_16[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10560]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10561]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10562]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10563]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10564]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10565]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10566]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10567]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10568]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10569]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10570]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10571]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10572]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10573]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10574]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10575]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10576]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10577]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10578]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10579]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10580]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10581]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10582]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10583]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10584]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10585]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10586]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10587]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10588]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10589]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_16[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]))) {
        ++(vlSymsp->__Vcoverage[10590]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_16[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10591]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_16[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10592]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10593]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10594]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10595]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10596]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10597]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10598]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10599]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10600]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10601]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10602]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10603]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10604]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10605]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10606]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10607]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10608]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10609]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10610]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10611]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10612]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10613]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10614]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10615]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10616]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10617]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10618]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10619]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10620]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10621]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_16[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]))) {
        ++(vlSymsp->__Vcoverage[10622]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_16[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10623]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_16[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_16[3U]));
    }
    vlSelfRef.multiplier__DOT__A40__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_17[0U];
    vlSelfRef.multiplier__DOT__A40__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_17[1U];
    vlSelfRef.multiplier__DOT__A40__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_17[2U];
    vlSelfRef.multiplier__DOT__A40__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_17[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10624]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10625]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10626]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10627]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10628]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10629]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10630]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10631]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10632]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10633]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10634]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10635]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10636]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10637]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10638]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10639]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10640]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10641]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10642]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10643]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10644]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10645]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10646]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10647]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10648]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10649]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10650]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10651]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10652]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10653]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_17[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]))) {
        ++(vlSymsp->__Vcoverage[10654]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_17[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10655]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_17[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10656]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10657]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10658]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10659]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10660]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10661]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10662]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10663]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10664]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10665]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10666]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10667]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10668]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10669]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10670]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10671]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10672]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10673]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10674]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10675]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10676]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10677]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10678]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10679]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10680]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10681]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10682]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10683]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10684]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10685]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_17[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]))) {
        ++(vlSymsp->__Vcoverage[10686]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_17[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10687]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_17[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10688]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10689]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10690]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10691]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10692]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10693]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10694]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10695]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10696]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10697]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10698]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10699]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10700]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10701]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10702]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10703]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10704]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10705]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10706]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10707]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10708]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10709]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10710]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10711]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10712]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10713]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10714]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10715]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10716]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10717]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_17[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]))) {
        ++(vlSymsp->__Vcoverage[10718]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_17[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10719]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_17[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10720]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10721]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10722]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10723]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10724]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10725]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10726]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10727]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10728]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10729]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10730]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10731]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10732]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10733]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10734]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10735]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10736]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10737]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10738]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10739]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10740]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10741]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10742]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10743]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10744]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10745]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10746]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10747]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10748]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10749]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_17[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]))) {
        ++(vlSymsp->__Vcoverage[10750]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_17[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10751]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_17[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_17[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21632]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21633]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21634]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21635]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21636]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21637]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21638]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21639]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21640]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21641]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21642]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21643]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21644]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21645]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21646]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21647]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21648]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21649]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21650]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21651]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21652]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21653]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21654]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21655]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21656]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21657]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21658]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21659]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21660]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21661]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21662]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A40__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21663]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21664]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21665]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21666]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21667]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21668]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21669]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21670]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21671]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21672]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21673]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21674]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21675]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21676]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21677]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21678]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21679]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21680]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21681]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21682]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21683]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21684]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21685]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21686]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21687]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21688]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21689]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21690]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21691]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21692]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21693]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21694]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A40__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21695]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21696]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21697]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21698]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21699]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21700]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21701]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21702]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21703]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21704]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21705]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21706]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21707]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21708]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21709]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21710]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21711]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21712]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21713]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21714]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21715]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21716]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21717]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21718]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21719]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21720]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21721]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21722]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21723]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21724]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21725]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21726]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A40__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21727]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21728]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21729]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21730]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21731]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21732]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21733]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21734]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21735]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21736]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21737]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21738]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21739]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21740]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21741]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21742]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21743]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21744]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21745]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21746]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21747]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21748]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21749]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21750]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21751]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
}

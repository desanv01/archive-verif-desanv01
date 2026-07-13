// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14807]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14808]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14809]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14810]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14811]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14812]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14813]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]))) {
        ++(vlSymsp->__Vcoverage[14814]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_1[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14815]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_1[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14816]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14817]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14818]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14819]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14820]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14821]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14822]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14823]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14824]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14825]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14826]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14827]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14828]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14829]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14830]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14831]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14832]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14833]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14834]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14835]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14836]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14837]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14838]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14839]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14840]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14841]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14842]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14843]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14844]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14845]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]))) {
        ++(vlSymsp->__Vcoverage[14846]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_1[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14847]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_1[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_1[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23680]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23681]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23682]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23683]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23684]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23685]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23686]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23687]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23688]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23689]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23690]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23691]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23692]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23693]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23694]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23695]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23696]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23697]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23698]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23699]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23700]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23701]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23702]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23703]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23704]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23705]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23706]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23707]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23708]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23709]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23710]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A56__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23711]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23712]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23713]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23714]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23715]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23716]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23717]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23718]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23719]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23720]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23721]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23722]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23723]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23724]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23725]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23726]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23727]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23728]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23729]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23730]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23731]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23732]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23733]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23734]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23735]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23736]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23737]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23738]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23739]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23740]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23741]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23742]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A56__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23743]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23744]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23745]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23746]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23747]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23748]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23749]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23750]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23751]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23752]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23753]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23754]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23755]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23756]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23757]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23758]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23759]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23760]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23761]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23762]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23763]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23764]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23765]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23766]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23767]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23768]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23769]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23770]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23771]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23772]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23773]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23774]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A56__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23775]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23776]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23777]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23778]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23779]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23780]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23781]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23782]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23783]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23784]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23785]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23786]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23787]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23788]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23789]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23790]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23791]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23792]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23793]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23794]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23795]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23796]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23797]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23798]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23799]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23800]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23801]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23802]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23803]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23804]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23805]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23806]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A56__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23807]);
        vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A56__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A56__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l3_0[0U] = vlSelfRef.multiplier__DOT__A56__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l3_0[1U] = vlSelfRef.multiplier__DOT__A56__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l3_0[2U] = vlSelfRef.multiplier__DOT__A56__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l3_0[3U] = vlSelfRef.multiplier__DOT__A56__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A57__DOT__a[0U] = vlSelfRef.multiplier__DOT__l2_2[0U];
    vlSelfRef.multiplier__DOT__A57__DOT__a[1U] = vlSelfRef.multiplier__DOT__l2_2[1U];
    vlSelfRef.multiplier__DOT__A57__DOT__a[2U] = vlSelfRef.multiplier__DOT__l2_2[2U];
    vlSelfRef.multiplier__DOT__A57__DOT__a[3U] = vlSelfRef.multiplier__DOT__l2_2[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14848]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14849]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14850]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14851]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14852]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14853]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14854]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14855]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14856]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14857]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14858]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14859]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14860]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14861]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14862]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14863]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14864]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14865]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14866]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14867]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14868]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14869]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14870]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14871]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14872]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14873]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14874]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14875]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14876]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14877]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]))) {
        ++(vlSymsp->__Vcoverage[14878]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_2[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14879]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_2[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14880]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14881]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14882]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14883]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14884]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14885]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14886]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14887]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14888]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14889]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14890]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14891]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14892]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14893]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14894]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14895]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14896]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14897]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14898]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14899]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14900]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14901]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14902]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14903]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14904]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14905]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14906]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14907]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14908]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14909]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]))) {
        ++(vlSymsp->__Vcoverage[14910]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_2[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14911]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_2[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14912]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14913]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14914]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14915]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14916]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14917]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14918]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14919]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14920]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14921]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14922]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14923]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14924]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14925]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14926]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14927]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14928]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14929]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14930]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14931]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14932]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14933]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14934]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14935]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14936]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14937]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14938]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14939]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14940]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14941]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]))) {
        ++(vlSymsp->__Vcoverage[14942]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_2[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14943]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_2[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14944]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14945]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14946]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14947]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14948]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14949]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14950]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14951]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14952]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14953]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14954]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14955]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14956]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14957]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14958]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14959]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14960]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14961]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14962]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14963]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14964]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14965]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14966]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14967]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14968]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14969]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14970]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14971]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14972]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14973]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]))) {
        ++(vlSymsp->__Vcoverage[14974]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_2[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[14975]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_2[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_2[3U]));
    }
    vlSelfRef.multiplier__DOT__A57__DOT__b[0U] = vlSelfRef.multiplier__DOT__l2_3[0U];
    vlSelfRef.multiplier__DOT__A57__DOT__b[1U] = vlSelfRef.multiplier__DOT__l2_3[1U];
    vlSelfRef.multiplier__DOT__A57__DOT__b[2U] = vlSelfRef.multiplier__DOT__l2_3[2U];
    vlSelfRef.multiplier__DOT__A57__DOT__b[3U] = vlSelfRef.multiplier__DOT__l2_3[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14976]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14977]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14978]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14979]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14980]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14981]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14982]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14983]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14984]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14985]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14986]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14987]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14988]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14989]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14990]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14991]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14992]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14993]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14994]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14995]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14996]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14997]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14998]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[14999]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[15000]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[15001]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[15002]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[15003]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[15004]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[15005]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]))) {
        ++(vlSymsp->__Vcoverage[15006]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_3[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15007]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_3[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15008]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15009]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15010]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15011]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15012]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15013]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15014]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15015]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15016]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15017]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15018]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15019]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15020]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15021]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15022]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15023]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15024]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15025]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15026]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15027]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15028]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15029]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15030]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15031]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15032]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15033]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15034]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15035]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15036]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15037]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]))) {
        ++(vlSymsp->__Vcoverage[15038]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_3[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15039]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_3[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15040]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15041]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15042]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15043]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15044]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15045]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15046]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15047]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15048]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15049]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15050]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15051]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15052]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15053]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15054]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15055]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15056]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15057]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15058]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15059]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15060]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15061]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15062]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15063]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15064]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15065]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15066]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15067]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15068]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15069]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]))) {
        ++(vlSymsp->__Vcoverage[15070]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_3[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15071]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_3[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15072]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15073]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15074]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15075]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15076]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15077]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15078]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15079]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15080]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15081]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15082]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15083]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15084]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15085]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15086]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15087]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15088]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15089]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15090]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15091]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15092]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15093]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15094]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15095]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15096]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15097]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15098]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15099]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15100]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15101]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]))) {
        ++(vlSymsp->__Vcoverage[15102]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_3[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15103]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_3[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_3[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23808]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23809]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23810]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23811]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23812]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23813]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23814]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23815]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23816]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23817]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23818]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23819]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23820]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23821]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23822]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23823]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23824]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23825]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23826]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23827]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23828]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23829]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23830]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23831]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23832]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23833]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23834]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23835]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23836]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23837]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23838]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A57__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23839]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23840]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23841]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23842]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23843]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23844]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23845]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23846]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23847]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23848]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23849]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23850]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23851]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23852]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23853]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23854]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23855]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23856]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23857]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23858]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23859]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23860]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23861]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23862]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23863]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23864]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23865]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23866]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23867]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23868]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23869]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23870]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A57__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23871]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23872]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23873]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23874]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23875]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23876]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23877]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23878]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23879]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23880]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23881]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23882]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23883]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23884]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23885]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23886]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23887]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23888]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23889]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23890]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23891]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23892]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23893]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23894]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23895]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23896]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23897]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23898]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23899]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23900]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23901]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[23902]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A57__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23903]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23904]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23905]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23906]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23907]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23908]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23909]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23910]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23911]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23912]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23913]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23914]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23915]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23916]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23917]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23918]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23919]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23920]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23921]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23922]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23923]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23924]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23925]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23926]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23927]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23928]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23929]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23930]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23931]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23932]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23933]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[23934]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A57__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23935]);
        vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A57__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A57__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l3_1[0U] = vlSelfRef.multiplier__DOT__A57__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l3_1[1U] = vlSelfRef.multiplier__DOT__A57__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l3_1[2U] = vlSelfRef.multiplier__DOT__A57__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l3_1[3U] = vlSelfRef.multiplier__DOT__A57__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A60__DOT__sum, vlSelfRef.multiplier__DOT__A56__DOT__sum, vlSelfRef.multiplier__DOT__A57__DOT__sum);
    vlSelfRef.multiplier__DOT__A58__DOT__a[0U] = vlSelfRef.multiplier__DOT__l2_4[0U];
    vlSelfRef.multiplier__DOT__A58__DOT__a[1U] = vlSelfRef.multiplier__DOT__l2_4[1U];
    vlSelfRef.multiplier__DOT__A58__DOT__a[2U] = vlSelfRef.multiplier__DOT__l2_4[2U];
    vlSelfRef.multiplier__DOT__A58__DOT__a[3U] = vlSelfRef.multiplier__DOT__l2_4[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15104]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15105]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15106]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15107]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15108]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15109]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15110]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15111]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15112]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15113]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15114]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15115]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15116]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15117]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15118]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15119]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15120]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15121]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15122]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15123]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15124]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15125]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15126]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15127]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15128]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15129]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15130]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15131]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15132]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15133]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]))) {
        ++(vlSymsp->__Vcoverage[15134]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_4[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15135]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_4[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15136]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15137]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15138]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15139]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15140]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15141]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15142]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15143]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15144]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15145]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15146]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15147]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15148]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15149]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15150]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15151]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15152]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15153]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15154]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15155]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15156]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15157]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15158]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15159]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15160]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15161]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15162]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15163]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15164]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15165]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]))) {
        ++(vlSymsp->__Vcoverage[15166]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_4[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15167]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_4[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15168]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15169]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15170]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15171]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15172]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15173]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15174]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15175]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15176]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15177]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15178]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15179]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15180]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15181]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15182]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15183]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15184]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15185]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15186]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15187]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15188]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15189]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15190]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15191]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15192]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15193]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15194]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15195]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15196]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15197]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]))) {
        ++(vlSymsp->__Vcoverage[15198]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_4[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15199]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_4[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15200]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15201]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15202]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15203]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15204]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15205]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15206]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15207]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15208]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15209]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15210]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15211]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15212]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15213]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15214]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15215]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15216]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15217]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15218]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15219]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15220]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15221]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15222]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15223]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15224]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15225]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15226]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15227]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15228]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15229]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]))) {
        ++(vlSymsp->__Vcoverage[15230]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_4[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15231]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_4[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_4[3U]));
    }
    vlSelfRef.multiplier__DOT__A58__DOT__b[0U] = vlSelfRef.multiplier__DOT__l2_5[0U];
    vlSelfRef.multiplier__DOT__A58__DOT__b[1U] = vlSelfRef.multiplier__DOT__l2_5[1U];
    vlSelfRef.multiplier__DOT__A58__DOT__b[2U] = vlSelfRef.multiplier__DOT__l2_5[2U];
    vlSelfRef.multiplier__DOT__A58__DOT__b[3U] = vlSelfRef.multiplier__DOT__l2_5[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15232]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15233]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15234]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15235]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15236]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15237]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15238]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15239]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15240]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15241]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15242]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15243]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15244]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15245]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15246]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15247]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15248]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15249]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15250]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15251]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15252]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15253]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15254]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15255]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15256]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15257]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15258]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15259]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15260]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15261]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]))) {
        ++(vlSymsp->__Vcoverage[15262]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_5[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15263]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_5[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15264]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15265]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15266]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15267]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15268]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15269]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15270]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15271]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15272]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15273]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15274]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15275]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15276]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15277]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15278]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15279]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15280]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15281]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15282]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15283]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15284]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15285]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15286]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15287]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15288]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15289]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15290]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15291]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15292]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15293]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]))) {
        ++(vlSymsp->__Vcoverage[15294]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_5[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15295]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_5[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15296]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15297]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15298]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15299]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15300]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15301]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15302]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15303]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15304]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15305]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15306]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15307]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15308]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15309]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15310]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15311]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15312]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15313]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15314]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15315]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15316]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15317]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15318]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15319]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15320]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15321]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15322]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15323]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15324]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15325]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]))) {
        ++(vlSymsp->__Vcoverage[15326]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_5[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15327]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_5[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15328]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15329]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15330]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15331]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15332]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15333]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15334]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15335]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15336]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15337]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15338]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15339]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15340]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15341]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15342]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15343]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15344]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15345]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15346]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15347]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15348]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15349]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15350]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15351]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15352]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15353]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15354]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15355]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15356]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15357]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]))) {
        ++(vlSymsp->__Vcoverage[15358]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_5[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15359]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_5[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_5[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23936]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23937]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23938]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23939]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23940]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23941]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23942]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23943]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23944]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23945]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23946]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23947]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23948]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23949]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23950]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23951]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23952]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23953]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23954]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23955]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23956]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23957]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23958]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23959]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23960]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23961]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23962]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23963]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23964]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23965]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[23966]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A58__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23967]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23968]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23969]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23970]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23971]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23972]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23973]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23974]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23975]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23976]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23977]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23978]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23979]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23980]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23981]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23982]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23983]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23984]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23985]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23986]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23987]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23988]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23989]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23990]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23991]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23992]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23993]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23994]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23995]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23996]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23997]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[23998]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A58__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[23999]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24000]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24001]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24002]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24003]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24004]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24005]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24006]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24007]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24008]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24009]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24010]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24011]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24012]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24013]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24014]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24015]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24016]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24017]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24018]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24019]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24020]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24021]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24022]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24023]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24024]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24025]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24026]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24027]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24028]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24029]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24030]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A58__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24031]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24032]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24033]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24034]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24035]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24036]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24037]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24038]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24039]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24040]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24041]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24042]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24043]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24044]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24045]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24046]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24047]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24048]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24049]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24050]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24051]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24052]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24053]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24054]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24055]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24056]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24057]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24058]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24059]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24060]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24061]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24062]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A58__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24063]);
        vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A58__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A58__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l3_2[0U] = vlSelfRef.multiplier__DOT__A58__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l3_2[1U] = vlSelfRef.multiplier__DOT__A58__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l3_2[2U] = vlSelfRef.multiplier__DOT__A58__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l3_2[3U] = vlSelfRef.multiplier__DOT__A58__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A59__DOT__a[0U] = vlSelfRef.multiplier__DOT__l2_6[0U];
    vlSelfRef.multiplier__DOT__A59__DOT__a[1U] = vlSelfRef.multiplier__DOT__l2_6[1U];
    vlSelfRef.multiplier__DOT__A59__DOT__a[2U] = vlSelfRef.multiplier__DOT__l2_6[2U];
    vlSelfRef.multiplier__DOT__A59__DOT__a[3U] = vlSelfRef.multiplier__DOT__l2_6[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15360]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15361]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15362]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15363]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15364]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15365]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15366]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15367]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15368]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15369]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15370]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15371]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15372]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15373]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15374]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15375]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15376]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15377]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15378]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15379]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15380]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15381]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15382]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15383]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15384]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15385]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15386]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15387]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15388]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15389]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]))) {
        ++(vlSymsp->__Vcoverage[15390]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_6[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15391]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_6[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15392]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15393]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15394]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15395]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15396]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15397]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15398]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15399]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15400]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15401]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15402]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15403]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15404]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15405]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15406]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15407]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15408]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15409]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15410]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15411]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15412]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15413]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15414]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15415]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15416]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15417]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15418]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15419]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15420]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15421]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]))) {
        ++(vlSymsp->__Vcoverage[15422]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_6[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15423]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_6[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15424]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15425]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15426]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15427]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15428]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15429]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15430]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15431]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15432]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15433]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15434]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15435]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15436]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15437]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15438]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15439]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15440]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15441]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15442]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15443]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15444]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15445]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15446]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15447]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15448]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15449]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15450]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15451]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15452]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15453]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]))) {
        ++(vlSymsp->__Vcoverage[15454]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_6[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15455]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_6[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15456]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15457]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15458]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15459]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15460]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15461]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15462]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15463]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15464]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15465]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15466]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15467]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15468]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15469]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15470]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15471]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15472]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15473]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15474]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15475]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15476]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15477]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15478]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15479]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15480]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15481]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15482]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15483]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15484]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15485]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]))) {
        ++(vlSymsp->__Vcoverage[15486]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_6[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15487]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_6[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_6[3U]));
    }
    vlSelfRef.multiplier__DOT__A59__DOT__b[0U] = vlSelfRef.multiplier__DOT__l2_7[0U];
    vlSelfRef.multiplier__DOT__A59__DOT__b[1U] = vlSelfRef.multiplier__DOT__l2_7[1U];
    vlSelfRef.multiplier__DOT__A59__DOT__b[2U] = vlSelfRef.multiplier__DOT__l2_7[2U];
    vlSelfRef.multiplier__DOT__A59__DOT__b[3U] = vlSelfRef.multiplier__DOT__l2_7[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15488]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15489]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15490]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15491]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15492]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15493]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15494]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15495]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15496]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15497]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15498]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15499]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15500]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15501]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15502]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15503]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15504]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15505]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15506]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15507]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15508]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15509]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15510]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15511]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15512]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15513]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15514]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15515]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15516]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15517]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]))) {
        ++(vlSymsp->__Vcoverage[15518]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_7[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15519]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_7[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15520]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15521]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15522]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15523]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15524]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15525]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15526]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15527]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15528]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15529]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15530]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15531]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15532]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15533]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15534]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15535]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15536]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15537]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15538]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15539]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15540]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15541]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15542]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15543]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15544]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15545]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15546]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15547]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15548]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15549]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]))) {
        ++(vlSymsp->__Vcoverage[15550]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_7[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15551]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_7[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15552]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15553]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15554]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15555]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15556]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15557]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15558]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15559]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15560]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15561]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15562]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15563]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15564]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15565]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15566]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15567]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15568]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15569]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15570]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15571]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15572]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15573]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15574]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15575]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15576]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15577]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15578]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15579]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15580]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15581]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]))) {
        ++(vlSymsp->__Vcoverage[15582]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_7[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15583]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_7[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15584]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15585]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15586]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15587]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15588]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15589]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15590]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15591]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15592]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15593]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15594]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15595]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15596]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15597]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15598]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15599]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15600]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15601]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15602]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15603]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15604]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15605]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15606]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15607]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15608]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15609]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15610]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15611]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15612]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15613]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l2_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]))) {
        ++(vlSymsp->__Vcoverage[15614]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l2_7[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15615]);
        vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l2_7[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l2_7[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24064]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24065]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24066]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24067]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24068]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24069]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24070]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24071]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24072]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24073]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24074]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24075]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24076]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24077]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24078]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24079]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24080]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24081]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24082]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24083]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24084]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24085]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24086]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24087]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24088]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24089]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24090]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24091]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24092]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24093]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24094]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A59__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24095]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24096]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24097]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24098]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24099]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24100]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24101]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24102]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24103]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24104]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24105]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24106]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24107]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24108]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24109]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24110]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24111]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24112]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24113]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24114]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24115]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24116]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24117]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24118]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24119]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24120]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24121]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24122]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24123]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24124]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24125]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24126]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A59__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24127]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24128]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24129]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24130]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24131]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24132]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24133]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24134]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24135]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24136]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24137]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24138]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24139]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24140]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24141]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24142]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24143]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24144]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24145]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24146]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24147]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24148]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24149]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24150]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24151]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24152]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24153]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24154]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24155]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24156]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24157]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24158]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A59__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24159]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24160]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24161]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24162]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24163]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24164]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24165]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24166]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24167]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24168]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24169]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24170]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24171]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24172]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24173]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24174]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24175]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24176]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24177]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24178]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24179]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24180]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24181]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24182]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24183]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24184]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24185]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24186]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24187]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24188]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24189]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24190]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A59__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24191]);
        vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A59__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A59__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l3_3[0U] = vlSelfRef.multiplier__DOT__A59__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l3_3[1U] = vlSelfRef.multiplier__DOT__A59__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l3_3[2U] = vlSelfRef.multiplier__DOT__A59__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l3_3[3U] = vlSelfRef.multiplier__DOT__A59__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A61__DOT__sum, vlSelfRef.multiplier__DOT__A58__DOT__sum, vlSelfRef.multiplier__DOT__A59__DOT__sum);
    vlSelfRef.multiplier__DOT__A60__DOT__a[0U] = vlSelfRef.multiplier__DOT__l3_0[0U];
    vlSelfRef.multiplier__DOT__A60__DOT__a[1U] = vlSelfRef.multiplier__DOT__l3_0[1U];
    vlSelfRef.multiplier__DOT__A60__DOT__a[2U] = vlSelfRef.multiplier__DOT__l3_0[2U];
    vlSelfRef.multiplier__DOT__A60__DOT__a[3U] = vlSelfRef.multiplier__DOT__l3_0[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15616]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15617]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15618]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15619]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15620]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15621]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15622]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15623]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15624]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15625]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15626]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15627]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15628]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15629]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15630]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15631]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15632]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15633]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15634]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15635]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15636]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15637]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15638]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15639]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15640]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15641]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15642]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15643]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15644]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15645]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]))) {
        ++(vlSymsp->__Vcoverage[15646]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_0[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15647]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_0[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15648]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15649]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15650]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15651]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15652]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15653]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15654]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15655]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15656]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15657]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15658]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15659]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15660]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15661]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15662]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15663]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15664]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15665]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15666]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15667]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15668]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15669]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15670]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15671]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15672]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15673]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15674]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15675]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15676]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15677]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]))) {
        ++(vlSymsp->__Vcoverage[15678]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_0[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15679]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_0[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15680]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15681]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15682]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15683]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15684]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15685]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15686]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15687]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15688]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15689]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15690]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15691]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15692]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15693]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15694]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15695]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15696]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15697]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15698]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15699]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15700]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15701]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15702]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15703]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15704]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15705]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15706]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15707]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15708]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15709]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]))) {
        ++(vlSymsp->__Vcoverage[15710]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_0[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15711]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_0[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15712]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15713]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15714]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15715]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15716]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15717]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15718]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15719]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15720]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15721]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15722]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15723]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15724]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15725]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15726]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15727]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15728]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15729]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15730]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15731]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15732]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15733]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15734]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15735]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15736]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15737]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15738]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15739]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15740]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15741]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]))) {
        ++(vlSymsp->__Vcoverage[15742]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_0[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15743]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_0[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_0[3U]));
    }
    vlSelfRef.multiplier__DOT__A60__DOT__b[0U] = vlSelfRef.multiplier__DOT__l3_1[0U];
    vlSelfRef.multiplier__DOT__A60__DOT__b[1U] = vlSelfRef.multiplier__DOT__l3_1[1U];
    vlSelfRef.multiplier__DOT__A60__DOT__b[2U] = vlSelfRef.multiplier__DOT__l3_1[2U];
    vlSelfRef.multiplier__DOT__A60__DOT__b[3U] = vlSelfRef.multiplier__DOT__l3_1[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15744]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15745]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15746]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15747]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15748]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15749]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15750]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15751]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15752]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15753]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15754]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15755]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15756]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15757]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15758]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15759]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15760]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15761]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15762]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15763]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15764]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15765]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15766]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15767]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15768]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15769]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15770]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15771]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15772]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15773]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]))) {
        ++(vlSymsp->__Vcoverage[15774]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_1[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15775]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_1[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15776]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15777]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15778]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15779]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15780]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15781]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15782]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15783]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15784]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15785]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15786]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15787]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15788]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15789]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15790]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15791]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15792]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15793]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15794]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15795]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15796]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15797]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15798]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15799]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15800]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15801]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15802]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15803]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15804]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15805]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]))) {
        ++(vlSymsp->__Vcoverage[15806]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_1[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15807]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_1[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15808]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15809]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15810]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15811]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15812]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15813]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15814]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15815]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15816]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15817]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15818]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15819]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15820]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15821]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15822]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15823]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15824]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15825]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15826]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15827]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15828]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15829]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15830]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15831]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15832]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15833]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15834]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15835]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15836]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15837]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]))) {
        ++(vlSymsp->__Vcoverage[15838]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_1[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15839]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_1[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15840]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15841]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15842]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15843]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15844]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15845]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15846]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15847]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15848]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15849]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15850]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15851]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15852]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15853]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15854]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15855]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15856]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15857]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15858]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15859]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15860]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15861]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15862]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15863]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15864]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15865]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15866]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15867]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15868]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15869]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]))) {
        ++(vlSymsp->__Vcoverage[15870]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_1[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15871]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_1[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_1[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24192]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24193]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24194]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24195]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24196]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24197]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24198]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24199]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24200]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24201]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24202]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24203]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24204]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24205]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24206]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24207]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24208]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24209]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24210]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24211]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24212]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24213]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24214]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24215]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24216]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24217]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24218]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24219]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24220]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24221]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24222]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A60__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24223]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24224]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24225]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24226]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24227]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24228]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24229]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24230]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24231]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24232]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24233]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24234]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24235]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24236]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24237]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24238]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24239]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24240]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24241]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24242]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24243]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24244]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24245]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24246]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24247]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24248]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24249]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24250]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24251]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24252]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24253]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24254]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A60__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24255]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24256]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24257]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24258]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24259]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24260]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24261]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24262]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24263]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24264]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24265]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24266]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24267]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24268]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24269]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24270]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24271]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24272]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24273]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24274]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24275]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24276]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24277]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24278]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24279]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24280]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24281]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24282]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24283]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24284]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24285]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24286]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A60__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24287]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24288]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24289]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24290]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24291]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24292]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24293]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24294]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24295]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24296]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24297]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24298]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24299]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24300]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24301]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24302]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24303]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24304]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24305]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24306]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24307]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24308]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24309]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24310]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24311]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24312]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24313]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24314]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24315]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24316]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24317]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24318]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A60__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24319]);
        vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A60__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A60__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l4_0[0U] = vlSelfRef.multiplier__DOT__A60__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l4_0[1U] = vlSelfRef.multiplier__DOT__A60__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l4_0[2U] = vlSelfRef.multiplier__DOT__A60__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l4_0[3U] = vlSelfRef.multiplier__DOT__A60__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A61__DOT__a[0U] = vlSelfRef.multiplier__DOT__l3_2[0U];
    vlSelfRef.multiplier__DOT__A61__DOT__a[1U] = vlSelfRef.multiplier__DOT__l3_2[1U];
    vlSelfRef.multiplier__DOT__A61__DOT__a[2U] = vlSelfRef.multiplier__DOT__l3_2[2U];
    vlSelfRef.multiplier__DOT__A61__DOT__a[3U] = vlSelfRef.multiplier__DOT__l3_2[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15872]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15873]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15874]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15875]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15876]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15877]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15878]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15879]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15880]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15881]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15882]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15883]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15884]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15885]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15886]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15887]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15888]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15889]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15890]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15891]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15892]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15893]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15894]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15895]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15896]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15897]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15898]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15899]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15900]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15901]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]))) {
        ++(vlSymsp->__Vcoverage[15902]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_2[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15903]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_2[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15904]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15905]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15906]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15907]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15908]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15909]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15910]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15911]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15912]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15913]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15914]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15915]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15916]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15917]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15918]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15919]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15920]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15921]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15922]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15923]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15924]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15925]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15926]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15927]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15928]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15929]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15930]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15931]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15932]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15933]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]))) {
        ++(vlSymsp->__Vcoverage[15934]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_2[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15935]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_2[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15936]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15937]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15938]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15939]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15940]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15941]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15942]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15943]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15944]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15945]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15946]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15947]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15948]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15949]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15950]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15951]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15952]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15953]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15954]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15955]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15956]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15957]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15958]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15959]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15960]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15961]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15962]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15963]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15964]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15965]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]))) {
        ++(vlSymsp->__Vcoverage[15966]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_2[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15967]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_2[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15968]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15969]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15970]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15971]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15972]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15973]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15974]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15975]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15976]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15977]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15978]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15979]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15980]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15981]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15982]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15983]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15984]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15985]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15986]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15987]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15988]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15989]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15990]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15991]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15992]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15993]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15994]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15995]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15996]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15997]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]))) {
        ++(vlSymsp->__Vcoverage[15998]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_2[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[15999]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_2[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_2[3U]));
    }
    vlSelfRef.multiplier__DOT__A61__DOT__b[0U] = vlSelfRef.multiplier__DOT__l3_3[0U];
    vlSelfRef.multiplier__DOT__A61__DOT__b[1U] = vlSelfRef.multiplier__DOT__l3_3[1U];
    vlSelfRef.multiplier__DOT__A61__DOT__b[2U] = vlSelfRef.multiplier__DOT__l3_3[2U];
    vlSelfRef.multiplier__DOT__A61__DOT__b[3U] = vlSelfRef.multiplier__DOT__l3_3[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16000]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16001]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16002]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16003]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16004]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16005]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16006]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16007]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16008]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16009]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16010]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16011]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16012]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16013]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16014]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16015]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16016]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16017]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16018]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16019]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16020]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16021]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16022]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16023]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16024]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16025]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16026]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16027]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16028]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16029]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]))) {
        ++(vlSymsp->__Vcoverage[16030]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_3[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16031]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_3[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16032]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16033]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16034]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16035]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16036]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16037]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16038]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16039]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16040]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16041]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16042]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16043]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16044]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16045]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16046]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16047]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16048]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16049]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16050]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16051]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16052]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16053]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16054]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16055]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16056]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16057]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16058]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16059]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16060]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16061]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]))) {
        ++(vlSymsp->__Vcoverage[16062]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_3[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16063]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_3[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16064]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16065]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16066]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16067]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16068]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16069]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16070]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16071]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16072]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16073]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16074]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16075]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16076]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16077]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16078]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16079]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16080]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16081]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16082]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16083]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16084]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16085]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16086]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16087]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16088]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16089]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16090]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16091]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16092]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16093]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]))) {
        ++(vlSymsp->__Vcoverage[16094]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_3[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16095]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_3[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16096]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16097]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16098]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16099]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16100]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16101]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16102]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16103]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16104]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16105]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16106]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16107]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16108]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16109]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16110]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16111]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16112]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16113]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16114]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16115]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16116]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16117]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16118]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16119]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16120]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16121]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16122]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16123]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16124]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16125]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l3_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]))) {
        ++(vlSymsp->__Vcoverage[16126]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l3_3[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16127]);
        vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l3_3[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l3_3[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24320]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24321]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24322]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24323]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24324]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24325]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24326]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24327]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24328]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24329]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24330]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24331]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24332]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24333]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24334]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24335]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24336]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24337]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24338]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24339]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24340]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24341]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24342]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24343]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24344]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24345]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24346]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24347]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24348]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24349]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24350]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A61__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24351]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24352]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24353]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
}

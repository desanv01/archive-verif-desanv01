// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp13[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A6__DOT__sum, vlSelfRef.multiplier__DOT__pp12, vlSelfRef.multiplier__DOT__pp13);
    vlSelfRef.multiplier__DOT__A7__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp14[0U];
    vlSelfRef.multiplier__DOT__A7__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp14[1U];
    vlSelfRef.multiplier__DOT__A7__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp14[2U];
    vlSelfRef.multiplier__DOT__A7__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp14[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp14[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp14[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp14[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp14[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp14[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp14[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp14[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp14[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp14[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp14[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp14[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp14[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp14[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp14[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp14[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp14[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp14[3U]));
    }
    vlSelfRef.multiplier__DOT__A7__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp15[0U];
    vlSelfRef.multiplier__DOT__A7__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp15[1U];
    vlSelfRef.multiplier__DOT__A7__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp15[2U];
    vlSelfRef.multiplier__DOT__A7__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp15[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp15[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp15[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp15[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp15[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp15[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp15[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp15[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp15[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp15[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp15[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp15[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp15[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp15[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp15[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp15[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp15[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp15[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A7__DOT__sum, vlSelfRef.multiplier__DOT__pp14, vlSelfRef.multiplier__DOT__pp15);
    vlSelfRef.multiplier__DOT__A8__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp16[0U];
    vlSelfRef.multiplier__DOT__A8__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp16[1U];
    vlSelfRef.multiplier__DOT__A8__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp16[2U];
    vlSelfRef.multiplier__DOT__A8__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp16[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp16[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp16[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp16[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp16[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp16[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp16[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp16[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp16[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp16[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp16[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp16[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp16[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp16[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp16[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp16[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp16[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp16[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp16[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp16[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp16[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp16[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp16[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp16[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp16[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp16[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp16[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp16[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp16[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp16[3U]));
    }
    vlSelfRef.multiplier__DOT__A8__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp17[0U];
    vlSelfRef.multiplier__DOT__A8__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp17[1U];
    vlSelfRef.multiplier__DOT__A8__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp17[2U];
    vlSelfRef.multiplier__DOT__A8__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp17[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp17[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp17[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp17[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp17[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp17[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp17[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp17[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp17[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp17[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp17[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp17[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp17[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp17[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp17[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp17[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp17[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp17[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp17[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp17[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp17[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp17[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp17[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp17[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp17[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp17[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp17[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp17[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp17[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp17[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A8__DOT__sum, vlSelfRef.multiplier__DOT__pp16, vlSelfRef.multiplier__DOT__pp17);
    vlSelfRef.multiplier__DOT__A9__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp18[0U];
    vlSelfRef.multiplier__DOT__A9__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp18[1U];
    vlSelfRef.multiplier__DOT__A9__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp18[2U];
    vlSelfRef.multiplier__DOT__A9__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp18[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp18[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp18[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp18[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp18[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp18[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp18[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp18[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp18[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp18[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp18[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp18[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp18[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp18[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp18[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp18[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp18[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp18[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp18[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp18[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp18[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp18[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp18[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp18[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp18[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp18[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp18[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp18[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp18[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp18[3U]));
    }
    vlSelfRef.multiplier__DOT__A9__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp19[0U];
    vlSelfRef.multiplier__DOT__A9__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp19[1U];
    vlSelfRef.multiplier__DOT__A9__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp19[2U];
    vlSelfRef.multiplier__DOT__A9__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp19[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp19[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp19[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp19[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp19[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp19[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp19[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp19[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp19[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp19[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp19[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp19[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp19[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp19[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp19[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp19[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp19[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp19[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp19[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp19[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp19[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp19[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp19[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp19[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp19[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp19[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp19[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp19[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp19[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp19[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A9__DOT__sum, vlSelfRef.multiplier__DOT__pp18, vlSelfRef.multiplier__DOT__pp19);
    vlSelfRef.multiplier__DOT__A10__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp20[0U];
    vlSelfRef.multiplier__DOT__A10__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp20[1U];
    vlSelfRef.multiplier__DOT__A10__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp20[2U];
    vlSelfRef.multiplier__DOT__A10__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp20[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp20[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp20[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp20[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp20[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp20[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp20[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp20[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp20[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp20[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp20[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp20[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp20[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp20[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp20[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp20[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp20[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp20[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp20[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp20[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp20[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp20[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp20[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp20[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp20[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp20[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp20[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp20[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp20[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp20[3U]));
    }
    vlSelfRef.multiplier__DOT__A10__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp21[0U];
    vlSelfRef.multiplier__DOT__A10__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp21[1U];
    vlSelfRef.multiplier__DOT__A10__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp21[2U];
    vlSelfRef.multiplier__DOT__A10__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp21[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp21[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp21[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp21[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp21[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp21[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp21[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp21[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp21[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp21[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp21[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp21[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp21[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp21[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp21[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp21[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp21[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp21[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp21[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp21[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp21[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp21[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp21[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp21[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp21[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp21[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp21[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp21[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp21[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp21[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A10__DOT__sum, vlSelfRef.multiplier__DOT__pp20, vlSelfRef.multiplier__DOT__pp21);
    vlSelfRef.multiplier__DOT__A11__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp22[0U];
    vlSelfRef.multiplier__DOT__A11__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp22[1U];
    vlSelfRef.multiplier__DOT__A11__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp22[2U];
    vlSelfRef.multiplier__DOT__A11__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp22[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp22[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp22[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp22[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp22[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp22[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp22[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp22[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp22[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp22[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp22[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp22[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp22[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp22[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp22[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp22[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp22[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp22[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp22[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp22[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp22[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp22[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp22[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp22[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp22[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp22[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp22[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp22[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp22[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp22[3U]));
    }
    vlSelfRef.multiplier__DOT__A11__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp23[0U];
    vlSelfRef.multiplier__DOT__A11__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp23[1U];
    vlSelfRef.multiplier__DOT__A11__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp23[2U];
    vlSelfRef.multiplier__DOT__A11__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp23[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp23[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp23[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp23[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp23[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp23[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp23[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp23[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp23[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp23[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp23[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp23[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp23[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp23[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp23[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp23[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp23[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp23[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp23[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp23[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp23[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp23[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp23[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp23[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp23[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp23[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp23[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp23[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp23[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp23[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A11__DOT__sum, vlSelfRef.multiplier__DOT__pp22, vlSelfRef.multiplier__DOT__pp23);
    vlSelfRef.multiplier__DOT__A12__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp24[0U];
    vlSelfRef.multiplier__DOT__A12__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp24[1U];
    vlSelfRef.multiplier__DOT__A12__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp24[2U];
    vlSelfRef.multiplier__DOT__A12__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp24[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp24[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp24[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp24[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp24[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp24[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp24[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp24[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp24[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp24[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp24[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp24[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp24[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp24[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp24[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp24[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp24[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp24[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp24[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp24[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp24[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp24[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp24[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp24[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp24[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp24[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp24[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp24[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp24[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp24[3U]));
    }
    vlSelfRef.multiplier__DOT__A12__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp25[0U];
    vlSelfRef.multiplier__DOT__A12__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp25[1U];
    vlSelfRef.multiplier__DOT__A12__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp25[2U];
    vlSelfRef.multiplier__DOT__A12__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp25[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp25[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp25[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp25[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp25[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp25[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp25[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp25[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp25[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp25[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp25[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp25[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp25[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp25[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp25[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp25[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp25[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp25[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp25[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3536]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp25[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp25[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp25[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp25[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp25[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp25[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp25[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3576]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3577]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3578]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3579]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp25[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp25[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp25[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp25[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A12__DOT__sum, vlSelfRef.multiplier__DOT__pp24, vlSelfRef.multiplier__DOT__pp25);
    vlSelfRef.multiplier__DOT__A13__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp26[0U];
    vlSelfRef.multiplier__DOT__A13__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp26[1U];
    vlSelfRef.multiplier__DOT__A13__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp26[2U];
    vlSelfRef.multiplier__DOT__A13__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp26[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp26[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp26[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp26[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp26[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp26[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp26[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp26[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp26[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp26[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp26[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp26[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3640]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3641]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3642]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3643]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3644]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3645]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp26[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]))) {
        ++(vlSymsp->__Vcoverage[3646]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp26[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3647]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp26[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp26[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3648]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp26[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3649]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp26[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3650]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp26[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3651]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3652]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3653]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3654]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3655]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3656]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3657]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3658]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3659]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3660]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3661]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3662]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3663]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3664]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3665]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3666]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3667]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3668]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3669]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3670]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3671]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3672]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3674]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3675]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3676]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3677]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp26[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]))) {
        ++(vlSymsp->__Vcoverage[3678]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp26[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3679]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp26[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp26[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3680]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp26[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3681]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp26[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp26[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3689]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3690]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3691]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3692]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3693]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3694]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3695]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3696]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp26[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp26[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp26[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp26[3U]));
    }
    vlSelfRef.multiplier__DOT__A13__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp27[0U];
    vlSelfRef.multiplier__DOT__A13__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp27[1U];
    vlSelfRef.multiplier__DOT__A13__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp27[2U];
    vlSelfRef.multiplier__DOT__A13__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp27[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp27[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp27[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp27[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp27[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp27[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp27[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp27[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp27[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp27[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3745]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp27[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3746]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp27[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3747]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3748]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp27[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp27[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp27[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp27[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp27[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp27[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp27[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3788]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3789]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3791]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp27[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp27[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp27[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp27[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp27[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp27[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp27[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp27[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp27[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp27[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp27[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A13__DOT__sum, vlSelfRef.multiplier__DOT__pp26, vlSelfRef.multiplier__DOT__pp27);
    vlSelfRef.multiplier__DOT__A14__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp28[0U];
    vlSelfRef.multiplier__DOT__A14__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp28[1U];
    vlSelfRef.multiplier__DOT__A14__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp28[2U];
    vlSelfRef.multiplier__DOT__A14__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp28[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp28[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp28[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp28[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp28[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp28[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp28[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp28[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp28[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp28[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp28[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp28[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3897]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3898]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3899]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3900]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3901]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp28[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]))) {
        ++(vlSymsp->__Vcoverage[3902]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp28[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3903]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp28[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp28[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3904]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp28[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3905]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp28[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3906]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp28[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3907]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3908]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3909]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3910]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3911]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3912]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3913]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3914]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3915]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3916]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3917]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3918]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3919]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3920]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3921]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3922]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3925]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3926]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3927]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3928]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3929]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3930]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3931]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3932]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3933]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp28[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]))) {
        ++(vlSymsp->__Vcoverage[3934]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp28[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3935]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp28[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp28[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3936]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp28[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3937]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp28[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3938]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp28[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3939]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3940]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3941]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3942]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3943]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3944]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3945]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3946]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3947]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3948]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3949]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3950]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3951]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3952]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3953]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3954]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3955]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3956]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3957]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3958]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3959]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3960]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3961]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3962]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3963]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3964]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3965]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp28[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]))) {
        ++(vlSymsp->__Vcoverage[3966]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp28[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3967]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp28[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp28[3U]));
    }
    vlSelfRef.multiplier__DOT__A14__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp29[0U];
    vlSelfRef.multiplier__DOT__A14__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp29[1U];
    vlSelfRef.multiplier__DOT__A14__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp29[2U];
    vlSelfRef.multiplier__DOT__A14__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp29[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp29[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3968]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp29[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp29[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp29[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp29[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp29[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp29[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp29[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp29[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp29[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp29[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp29[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp29[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp29[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp29[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp29[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp29[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp29[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21752]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21753]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21754]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21755]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21756]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21757]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21758]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A40__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21759]);
        vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A40__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A40__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_8[0U] = vlSelfRef.multiplier__DOT__A40__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_8[1U] = vlSelfRef.multiplier__DOT__A40__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_8[2U] = vlSelfRef.multiplier__DOT__A40__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_8[3U] = vlSelfRef.multiplier__DOT__A40__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A41__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_18[0U];
    vlSelfRef.multiplier__DOT__A41__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_18[1U];
    vlSelfRef.multiplier__DOT__A41__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_18[2U];
    vlSelfRef.multiplier__DOT__A41__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_18[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10752]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10753]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10754]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10755]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10756]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10757]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10758]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10759]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10760]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10761]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10762]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10763]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10764]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10765]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10766]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10767]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10768]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10769]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10770]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10771]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10772]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10773]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10774]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10775]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10776]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10777]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10778]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10779]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10780]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10781]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_18[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]))) {
        ++(vlSymsp->__Vcoverage[10782]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_18[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10783]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_18[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10784]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10785]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10786]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10787]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10788]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10789]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10790]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10791]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10792]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10793]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10794]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10795]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10796]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10797]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10798]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10799]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10800]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10801]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10802]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10803]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10804]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10805]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10806]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10807]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10808]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10809]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10810]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10811]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10812]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10813]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_18[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]))) {
        ++(vlSymsp->__Vcoverage[10814]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_18[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10815]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_18[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10816]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10817]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10818]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10819]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10820]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10821]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10822]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10823]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10824]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10825]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10826]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10827]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10828]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10829]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10830]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10831]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10832]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10833]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10834]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10835]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10836]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10837]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10838]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10839]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10840]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10841]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10842]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10843]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10844]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10845]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_18[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]))) {
        ++(vlSymsp->__Vcoverage[10846]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_18[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10847]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_18[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10848]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10849]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10850]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10851]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10852]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10853]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10854]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10855]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10856]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10857]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10858]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10859]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10860]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10861]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10862]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10863]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10864]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10865]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10866]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10867]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10868]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10869]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10870]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10871]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10872]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10873]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10874]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10875]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10876]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10877]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_18[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]))) {
        ++(vlSymsp->__Vcoverage[10878]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_18[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10879]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_18[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_18[3U]));
    }
    vlSelfRef.multiplier__DOT__A41__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_19[0U];
    vlSelfRef.multiplier__DOT__A41__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_19[1U];
    vlSelfRef.multiplier__DOT__A41__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_19[2U];
    vlSelfRef.multiplier__DOT__A41__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_19[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10880]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10881]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10882]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10883]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10884]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10885]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10886]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10887]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10888]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10889]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10890]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10891]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10892]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10893]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10894]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10895]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10896]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10897]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10898]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10899]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10900]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10901]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10902]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10903]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10904]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10905]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10906]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10907]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10908]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10909]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_19[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]))) {
        ++(vlSymsp->__Vcoverage[10910]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_19[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10911]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_19[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10912]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10913]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10914]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10915]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10916]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10917]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10918]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10919]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10920]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10921]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10922]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10923]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10924]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10925]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10926]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10927]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10928]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10929]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10930]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10931]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10932]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10933]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10934]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10935]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10936]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10937]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10938]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10939]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10940]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10941]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_19[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]))) {
        ++(vlSymsp->__Vcoverage[10942]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_19[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10943]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_19[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10944]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10945]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10946]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10947]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10948]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10949]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10950]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10951]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10952]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10953]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10954]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10955]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10956]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10957]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10958]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10959]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10960]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10961]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10962]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10963]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10964]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10965]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10966]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10967]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10968]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10969]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10970]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10971]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10972]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10973]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_19[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]))) {
        ++(vlSymsp->__Vcoverage[10974]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_19[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10975]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_19[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10976]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10977]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10978]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10979]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10980]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10981]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10982]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10983]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10984]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10985]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10986]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10987]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10988]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10989]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10990]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10991]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10992]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10993]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10994]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10995]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10996]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10997]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10998]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[10999]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[11000]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[11001]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[11002]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[11003]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[11004]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[11005]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_19[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]))) {
        ++(vlSymsp->__Vcoverage[11006]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_19[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11007]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_19[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_19[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21760]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21761]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21762]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21763]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21764]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21765]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21766]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21767]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21768]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21769]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21770]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21771]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21772]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21773]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21774]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21775]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21776]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21777]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21778]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21779]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21780]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21781]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21782]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21783]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21784]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21785]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21786]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21787]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21788]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21789]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21790]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A41__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21791]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21792]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21793]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21794]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21795]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21796]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21797]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21798]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21799]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21800]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21801]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21802]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21803]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21804]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21805]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21806]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21807]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21808]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21809]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21810]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21811]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21812]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21813]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21814]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21815]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21816]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21817]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21818]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21819]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21820]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21821]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21822]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A41__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21823]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21824]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21825]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21826]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21827]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21828]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21829]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21830]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21831]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21832]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21833]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21834]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21835]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21836]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21837]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21838]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21839]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21840]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21841]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21842]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21843]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21844]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21845]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21846]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21847]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21848]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21849]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21850]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21851]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21852]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21853]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21854]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A41__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21855]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21856]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21857]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21858]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21859]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21860]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21861]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21862]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21863]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21864]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21865]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21866]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21867]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21868]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21869]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21870]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21871]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21872]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21873]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21874]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21875]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21876]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21877]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21878]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21879]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21880]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21881]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21882]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21883]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21884]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21885]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21886]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A41__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21887]);
        vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A41__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A41__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_9[0U] = vlSelfRef.multiplier__DOT__A41__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_9[1U] = vlSelfRef.multiplier__DOT__A41__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_9[2U] = vlSelfRef.multiplier__DOT__A41__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_9[3U] = vlSelfRef.multiplier__DOT__A41__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A52__DOT__sum, vlSelfRef.multiplier__DOT__A40__DOT__sum, vlSelfRef.multiplier__DOT__A41__DOT__sum);
    vlSelfRef.multiplier__DOT__A42__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_20[0U];
    vlSelfRef.multiplier__DOT__A42__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_20[1U];
    vlSelfRef.multiplier__DOT__A42__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_20[2U];
    vlSelfRef.multiplier__DOT__A42__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_20[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11008]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11009]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11010]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11011]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11012]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11013]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11014]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11015]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11016]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11017]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11018]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11019]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11020]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11021]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11022]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11023]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11024]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11025]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11026]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11027]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11028]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11029]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11030]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11031]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11032]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11033]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11034]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11035]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11036]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11037]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_20[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]))) {
        ++(vlSymsp->__Vcoverage[11038]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_20[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11039]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_20[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11040]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11041]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11042]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11043]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11044]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11045]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11046]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11047]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11048]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11049]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11050]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11051]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11052]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11053]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11054]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11055]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11056]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11057]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11058]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11059]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11060]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11061]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11062]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11063]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11064]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11065]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11066]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11067]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11068]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11069]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_20[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]))) {
        ++(vlSymsp->__Vcoverage[11070]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_20[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11071]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_20[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11072]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11073]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11074]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11075]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11076]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11077]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11078]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11079]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11080]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11081]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11082]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11083]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11084]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11085]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11086]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11087]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11088]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11089]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11090]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11091]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11092]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11093]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11094]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11095]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11096]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11097]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11098]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11099]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11100]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11101]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_20[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]))) {
        ++(vlSymsp->__Vcoverage[11102]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_20[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11103]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_20[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11104]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11105]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11106]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11107]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11108]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11109]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11110]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11111]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11112]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11113]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11114]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11115]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11116]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11117]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11118]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11119]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11120]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11121]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11122]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11123]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11124]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11125]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11126]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11127]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11128]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11129]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11130]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11131]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11132]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11133]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_20[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]))) {
        ++(vlSymsp->__Vcoverage[11134]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_20[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11135]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_20[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_20[3U]));
    }
    vlSelfRef.multiplier__DOT__A42__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_21[0U];
    vlSelfRef.multiplier__DOT__A42__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_21[1U];
    vlSelfRef.multiplier__DOT__A42__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_21[2U];
    vlSelfRef.multiplier__DOT__A42__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_21[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11136]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11137]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11138]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11139]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11140]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11141]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11142]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11143]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11144]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11145]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11146]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11147]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11148]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11149]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11150]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11151]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11152]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11153]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11154]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11155]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11156]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11157]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11158]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11159]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11160]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11161]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11162]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11163]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11164]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11165]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_21[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]))) {
        ++(vlSymsp->__Vcoverage[11166]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_21[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11167]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_21[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11168]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11169]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11170]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11171]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11172]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11173]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11174]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11175]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11176]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11177]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11178]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11179]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11180]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11181]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11182]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11183]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11184]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11185]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11186]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11187]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11188]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11189]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11190]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11191]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11192]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11193]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11194]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11195]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11196]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11197]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_21[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]))) {
        ++(vlSymsp->__Vcoverage[11198]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_21[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11199]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_21[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11200]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11201]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11202]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11203]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11204]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11205]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11206]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11207]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11208]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11209]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11210]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11211]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11212]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11213]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11214]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11215]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11216]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11217]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11218]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11219]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11220]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11221]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11222]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11223]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11224]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11225]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11226]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11227]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11228]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11229]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_21[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]))) {
        ++(vlSymsp->__Vcoverage[11230]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_21[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11231]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_21[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11232]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11233]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11234]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11235]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11236]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11237]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11238]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11239]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11240]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11241]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11242]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11243]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11244]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11245]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11246]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11247]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11248]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11249]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11250]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11251]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11252]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11253]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11254]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11255]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11256]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11257]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11258]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11259]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11260]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11261]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_21[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]))) {
        ++(vlSymsp->__Vcoverage[11262]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_21[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11263]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_21[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_21[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21888]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21889]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21890]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21891]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21892]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21893]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21894]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21895]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21896]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21897]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21898]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21899]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21900]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21901]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21902]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21903]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21904]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21905]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21906]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21907]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21908]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21909]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21910]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21911]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21912]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21913]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21914]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21915]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21916]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21917]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21918]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A42__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21919]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21920]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21921]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21922]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21923]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21924]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21925]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21926]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21927]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21928]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21929]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21930]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21931]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21932]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21933]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21934]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21935]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21936]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21937]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21938]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21939]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21940]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21941]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21942]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21943]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21944]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21945]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21946]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21947]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21948]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21949]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21950]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A42__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21951]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21952]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21953]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21954]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21955]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21956]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21957]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21958]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21959]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21960]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21961]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21962]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21963]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21964]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21965]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21966]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21967]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21968]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21969]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21970]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21971]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21972]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21973]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21974]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21975]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21976]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21977]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21978]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21979]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21980]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21981]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[21982]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A42__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21983]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21984]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21985]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21986]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21987]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21988]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21989]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21990]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21991]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21992]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21993]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21994]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21995]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21996]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21997]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21998]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[21999]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22000]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22001]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22002]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22003]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22004]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22005]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22006]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22007]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22008]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22009]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22010]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22011]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22012]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22013]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22014]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A42__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22015]);
        vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A42__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A42__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_10[0U] = vlSelfRef.multiplier__DOT__A42__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_10[1U] = vlSelfRef.multiplier__DOT__A42__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_10[2U] = vlSelfRef.multiplier__DOT__A42__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_10[3U] = vlSelfRef.multiplier__DOT__A42__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A43__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_22[0U];
    vlSelfRef.multiplier__DOT__A43__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_22[1U];
    vlSelfRef.multiplier__DOT__A43__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_22[2U];
    vlSelfRef.multiplier__DOT__A43__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_22[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11264]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11265]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11266]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11267]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11268]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11269]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11270]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11271]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11272]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11273]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11274]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11275]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11276]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11277]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11278]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11279]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11280]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11281]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11282]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11283]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11284]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11285]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11286]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11287]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11288]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11289]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11290]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11291]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11292]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11293]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_22[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]))) {
        ++(vlSymsp->__Vcoverage[11294]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_22[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11295]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_22[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11296]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11297]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11298]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11299]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11300]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11301]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11302]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11303]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11304]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11305]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11306]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11307]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11308]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11309]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11310]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11311]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11312]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11313]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11314]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11315]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11316]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11317]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11318]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11319]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11320]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11321]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11322]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11323]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11324]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11325]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_22[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]))) {
        ++(vlSymsp->__Vcoverage[11326]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_22[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11327]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_22[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11328]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11329]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11330]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11331]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11332]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11333]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11334]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11335]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11336]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11337]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11338]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11339]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11340]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11341]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11342]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11343]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11344]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11345]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11346]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11347]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11348]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11349]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11350]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11351]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11352]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11353]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11354]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11355]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11356]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11357]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_22[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]))) {
        ++(vlSymsp->__Vcoverage[11358]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_22[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11359]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_22[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11360]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11361]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11362]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11363]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11364]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11365]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11366]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11367]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11368]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11369]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11370]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11371]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11372]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11373]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11374]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11375]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11376]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11377]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11378]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11379]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11380]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11381]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11382]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11383]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11384]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11385]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11386]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11387]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11388]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11389]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_22[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]))) {
        ++(vlSymsp->__Vcoverage[11390]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_22[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11391]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_22[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_22[3U]));
    }
    vlSelfRef.multiplier__DOT__A43__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_23[0U];
    vlSelfRef.multiplier__DOT__A43__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_23[1U];
    vlSelfRef.multiplier__DOT__A43__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_23[2U];
    vlSelfRef.multiplier__DOT__A43__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_23[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11392]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11393]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11394]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11395]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11396]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11397]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11398]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11399]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11400]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11401]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11402]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11403]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11404]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11405]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11406]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11407]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11408]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11409]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11410]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11411]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11412]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11413]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11414]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11415]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11416]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11417]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11418]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11419]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11420]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11421]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_23[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]))) {
        ++(vlSymsp->__Vcoverage[11422]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_23[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11423]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_23[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11424]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11425]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11426]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11427]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11428]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11429]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11430]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11431]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11432]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11433]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11434]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11435]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11436]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11437]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11438]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11439]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11440]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11441]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11442]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11443]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11444]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11445]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11446]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11447]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11448]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11449]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11450]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11451]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11452]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11453]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_23[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]))) {
        ++(vlSymsp->__Vcoverage[11454]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_23[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11455]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_23[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11456]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11457]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11458]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11459]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11460]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11461]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11462]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11463]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11464]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11465]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11466]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11467]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11468]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11469]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11470]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11471]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11472]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11473]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11474]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11475]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11476]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11477]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11478]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11479]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11480]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11481]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11482]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11483]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11484]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11485]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_23[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]))) {
        ++(vlSymsp->__Vcoverage[11486]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_23[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11487]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_23[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11488]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11489]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11490]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11491]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11492]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11493]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11494]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11495]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11496]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11497]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11498]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11499]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11500]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11501]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11502]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11503]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11504]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11505]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11506]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11507]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11508]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11509]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11510]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11511]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11512]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11513]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11514]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11515]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11516]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11517]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_23[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]))) {
        ++(vlSymsp->__Vcoverage[11518]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_23[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11519]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_23[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_23[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22016]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22017]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22018]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22019]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22020]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22021]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22022]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22023]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22024]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22025]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22026]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22027]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22028]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22029]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22030]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22031]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22032]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22033]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22034]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22035]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22036]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22037]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22038]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22039]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22040]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22041]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22042]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22043]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22044]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22045]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22046]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A43__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22047]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22048]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22049]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22050]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22051]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22052]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22053]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22054]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22055]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22056]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22057]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22058]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22059]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22060]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22061]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22062]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22063]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22064]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22065]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22066]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22067]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22068]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22069]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22070]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22071]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22072]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22073]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22074]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22075]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22076]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22077]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22078]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A43__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22079]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22080]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22081]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22082]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22083]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22084]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22085]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22086]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22087]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22088]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22089]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22090]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22091]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22092]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22093]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22094]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22095]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22096]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22097]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22098]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22099]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22100]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22101]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22102]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22103]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22104]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22105]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22106]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22107]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22108]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22109]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22110]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A43__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22111]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22112]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22113]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22114]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22115]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22116]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22117]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22118]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22119]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22120]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22121]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22122]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22123]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22124]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22125]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22126]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22127]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22128]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22129]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22130]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22131]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22132]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22133]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22134]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22135]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22136]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22137]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22138]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22139]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22140]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22141]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22142]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A43__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22143]);
        vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A43__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A43__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_11[0U] = vlSelfRef.multiplier__DOT__A43__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_11[1U] = vlSelfRef.multiplier__DOT__A43__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_11[2U] = vlSelfRef.multiplier__DOT__A43__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_11[3U] = vlSelfRef.multiplier__DOT__A43__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A53__DOT__sum, vlSelfRef.multiplier__DOT__A42__DOT__sum, vlSelfRef.multiplier__DOT__A43__DOT__sum);
    vlSelfRef.multiplier__DOT__A44__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_24[0U];
    vlSelfRef.multiplier__DOT__A44__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_24[1U];
    vlSelfRef.multiplier__DOT__A44__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_24[2U];
    vlSelfRef.multiplier__DOT__A44__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_24[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11520]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11521]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11522]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11523]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11524]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11525]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11526]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11527]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11528]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11529]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11530]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11531]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11532]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11533]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11534]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11535]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11536]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11537]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11538]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11539]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11540]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11541]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11542]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11543]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11544]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11545]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11546]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11547]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11548]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11549]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_24[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]))) {
        ++(vlSymsp->__Vcoverage[11550]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_24[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11551]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_24[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11552]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11553]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11554]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11555]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11556]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11557]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11558]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11559]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11560]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11561]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11562]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11563]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11564]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11565]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11566]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11567]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11568]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11569]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11570]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11571]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11572]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11573]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11574]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11575]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11576]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11577]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11578]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11579]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11580]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11581]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_24[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]))) {
        ++(vlSymsp->__Vcoverage[11582]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_24[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11583]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_24[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11584]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11585]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11586]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11587]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11588]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11589]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11590]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11591]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11592]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11593]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11594]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11595]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11596]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11597]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11598]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11599]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11600]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11601]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11602]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11603]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11604]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11605]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11606]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11607]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11608]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11609]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11610]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11611]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11612]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11613]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_24[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]))) {
        ++(vlSymsp->__Vcoverage[11614]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_24[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11615]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_24[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11616]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11617]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11618]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11619]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11620]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11621]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11622]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11623]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11624]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11625]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11626]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11627]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11628]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11629]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11630]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11631]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11632]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11633]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11634]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11635]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11636]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11637]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11638]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11639]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11640]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11641]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11642]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11643]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11644]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11645]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_24[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]))) {
        ++(vlSymsp->__Vcoverage[11646]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_24[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11647]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_24[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_24[3U]));
    }
    vlSelfRef.multiplier__DOT__A44__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_25[0U];
    vlSelfRef.multiplier__DOT__A44__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_25[1U];
    vlSelfRef.multiplier__DOT__A44__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_25[2U];
    vlSelfRef.multiplier__DOT__A44__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_25[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11648]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11649]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11650]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11651]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11652]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11653]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11654]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11655]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11656]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11657]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11658]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11659]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11660]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11661]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11662]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11663]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11664]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11665]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11666]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11667]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11668]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11669]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11670]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11671]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11672]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11673]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11674]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11675]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11676]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11677]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_25[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]))) {
        ++(vlSymsp->__Vcoverage[11678]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_25[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11679]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_25[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11680]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11681]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11682]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11683]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11684]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11685]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11686]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11687]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11688]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11689]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11690]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11691]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11692]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11693]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11694]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11695]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11696]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11697]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11698]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11699]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11700]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11701]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11702]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11703]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11704]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11705]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11706]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11707]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11708]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11709]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_25[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]))) {
        ++(vlSymsp->__Vcoverage[11710]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_25[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11711]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_25[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11712]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11713]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11714]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11715]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11716]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11717]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11718]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11719]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11720]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11721]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11722]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11723]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11724]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11725]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11726]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11727]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11728]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11729]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11730]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11731]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11732]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11733]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11734]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11735]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11736]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11737]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11738]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11739]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11740]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11741]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_25[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]))) {
        ++(vlSymsp->__Vcoverage[11742]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_25[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11743]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_25[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11744]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11745]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11746]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11747]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11748]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11749]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11750]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11751]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11752]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11753]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11754]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11755]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11756]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11757]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11758]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11759]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11760]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11761]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11762]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11763]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11764]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11765]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11766]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11767]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11768]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11769]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11770]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11771]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11772]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11773]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_25[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]))) {
        ++(vlSymsp->__Vcoverage[11774]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_25[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11775]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_25[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_25[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22144]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22145]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22146]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22147]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22148]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22149]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22150]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22151]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22152]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22153]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22154]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22155]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22156]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22157]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22158]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22159]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22160]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22161]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22162]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22163]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22164]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22165]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22166]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22167]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22168]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22169]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22170]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22171]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22172]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22173]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22174]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A44__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22175]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22176]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22177]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22178]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22179]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22180]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22181]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22182]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22183]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22184]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22185]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22186]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22187]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22188]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22189]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22190]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22191]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22192]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22193]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22194]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22195]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22196]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22197]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22198]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22199]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22200]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22201]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22202]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22203]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22204]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22205]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22206]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A44__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22207]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22208]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22209]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22210]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22211]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22212]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22213]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22214]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22215]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22216]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22217]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22218]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22219]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22220]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22221]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22222]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22223]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22224]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22225]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22226]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22227]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22228]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22229]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22230]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22231]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22232]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22233]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22234]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22235]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22236]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22237]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22238]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A44__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22239]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22240]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22241]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22242]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22243]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22244]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22245]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22246]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22247]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22248]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22249]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22250]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22251]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22252]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22253]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22254]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22255]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22256]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22257]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22258]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22259]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22260]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22261]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22262]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22263]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22264]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22265]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22266]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22267]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22268]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22269]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22270]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A44__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22271]);
        vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A44__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A44__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_12[0U] = vlSelfRef.multiplier__DOT__A44__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_12[1U] = vlSelfRef.multiplier__DOT__A44__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_12[2U] = vlSelfRef.multiplier__DOT__A44__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_12[3U] = vlSelfRef.multiplier__DOT__A44__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A45__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_26[0U];
    vlSelfRef.multiplier__DOT__A45__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_26[1U];
    vlSelfRef.multiplier__DOT__A45__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_26[2U];
    vlSelfRef.multiplier__DOT__A45__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_26[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11776]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11777]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11778]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11779]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11780]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11781]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11782]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11783]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11784]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11785]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11786]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11787]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11788]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11789]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11790]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11791]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11792]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11793]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11794]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11795]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11796]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11797]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11798]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11799]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11800]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11801]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11802]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11803]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11804]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11805]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_26[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]))) {
        ++(vlSymsp->__Vcoverage[11806]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_26[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11807]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_26[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11808]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11809]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11810]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11811]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11812]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11813]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11814]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11815]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11816]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11817]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11818]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11819]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11820]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11821]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11822]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11823]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11824]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11825]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11826]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11827]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11828]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11829]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11830]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11831]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11832]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11833]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11834]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11835]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11836]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11837]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_26[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]))) {
        ++(vlSymsp->__Vcoverage[11838]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_26[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11839]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_26[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11840]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11841]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11842]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11843]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11844]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11845]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11846]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11847]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11848]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11849]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11850]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11851]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11852]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11853]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11854]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11855]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11856]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11857]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11858]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11859]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11860]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11861]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11862]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11863]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11864]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11865]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11866]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11867]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11868]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11869]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_26[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]))) {
        ++(vlSymsp->__Vcoverage[11870]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_26[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11871]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_26[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11872]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11873]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11874]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11875]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11876]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11877]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11878]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11879]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11880]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11881]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11882]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11883]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11884]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11885]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11886]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11887]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11888]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11889]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11890]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11891]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11892]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11893]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11894]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11895]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11896]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11897]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11898]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11899]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11900]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11901]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_26[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]))) {
        ++(vlSymsp->__Vcoverage[11902]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_26[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11903]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_26[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_26[3U]));
    }
    vlSelfRef.multiplier__DOT__A45__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_27[0U];
    vlSelfRef.multiplier__DOT__A45__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_27[1U];
    vlSelfRef.multiplier__DOT__A45__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_27[2U];
    vlSelfRef.multiplier__DOT__A45__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_27[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11904]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11905]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11906]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11907]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11908]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11909]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11910]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11911]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11912]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11913]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11914]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11915]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11916]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11917]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11918]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11919]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11920]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11921]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11922]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11923]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11924]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11925]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11926]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11927]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11928]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11929]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11930]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11931]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11932]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11933]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_27[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]))) {
        ++(vlSymsp->__Vcoverage[11934]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_27[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11935]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_27[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11936]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11937]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11938]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11939]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11940]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11941]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11942]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11943]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11944]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11945]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11946]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11947]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11948]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11949]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11950]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11951]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11952]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11953]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11954]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11955]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11956]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11957]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11958]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11959]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11960]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11961]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11962]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11963]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11964]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11965]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_27[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]))) {
        ++(vlSymsp->__Vcoverage[11966]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_27[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11967]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_27[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11968]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11969]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11970]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11971]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11972]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11973]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11974]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11975]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11976]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11977]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11978]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11979]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11980]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11981]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11982]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11983]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11984]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11985]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11986]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11987]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11988]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11989]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11990]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11991]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11992]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11993]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11994]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11995]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11996]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11997]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_27[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]))) {
        ++(vlSymsp->__Vcoverage[11998]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_27[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11999]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_27[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12000]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12001]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12002]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12003]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12004]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12005]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12006]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12007]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12008]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12009]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12010]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12011]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12012]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12013]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12014]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12015]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12016]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12017]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12018]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12019]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12020]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12021]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12022]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12023]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12024]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12025]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12026]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12027]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12028]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12029]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_27[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]))) {
        ++(vlSymsp->__Vcoverage[12030]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_27[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12031]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_27[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_27[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22272]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22273]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22274]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22275]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22276]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22277]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22278]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22279]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22280]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22281]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22282]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22283]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22284]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22285]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22286]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22287]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22288]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22289]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22290]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22291]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22292]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22293]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22294]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22295]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22296]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22297]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22298]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22299]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22300]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22301]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[22302]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A45__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22303]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22304]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22305]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22306]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22307]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22308]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22309]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22310]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22311]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22312]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22313]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22314]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22315]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22316]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22317]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22318]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22319]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22320]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22321]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22322]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22323]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22324]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22325]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22326]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22327]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22328]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22329]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22330]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22331]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22332]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22333]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[22334]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A45__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22335]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22336]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22337]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22338]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22339]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22340]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22341]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22342]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22343]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22344]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22345]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22346]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22347]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22348]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22349]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22350]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22351]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22352]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22353]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22354]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22355]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22356]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22357]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22358]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22359]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22360]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22361]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22362]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22363]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22364]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22365]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[22366]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A45__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22367]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22368]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22369]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22370]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22371]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22372]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22373]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22374]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22375]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22376]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22377]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22378]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22379]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22380]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22381]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22382]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22383]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22384]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22385]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22386]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22387]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22388]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22389]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22390]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22391]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22392]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22393]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22394]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22395]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22396]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22397]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[22398]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A45__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[22399]);
        vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A45__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A45__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_13[0U] = vlSelfRef.multiplier__DOT__A45__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_13[1U] = vlSelfRef.multiplier__DOT__A45__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_13[2U] = vlSelfRef.multiplier__DOT__A45__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_13[3U] = vlSelfRef.multiplier__DOT__A45__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A54__DOT__sum, vlSelfRef.multiplier__DOT__A44__DOT__sum, vlSelfRef.multiplier__DOT__A45__DOT__sum);
    vlSelfRef.multiplier__DOT__A46__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_28[0U];
    vlSelfRef.multiplier__DOT__A46__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_28[1U];
    vlSelfRef.multiplier__DOT__A46__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_28[2U];
    vlSelfRef.multiplier__DOT__A46__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_28[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12032]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12033]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12034]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12035]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12036]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12037]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12038]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12039]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12040]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12041]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12042]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12043]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12044]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12045]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12046]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12047]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12048]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12049]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12050]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12051]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12052]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12053]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12054]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12055]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12056]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12057]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12058]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12059]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12060]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12061]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_28[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]))) {
        ++(vlSymsp->__Vcoverage[12062]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_28[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12063]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_28[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12064]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12065]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12066]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12067]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12068]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12069]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12070]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12071]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12072]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12073]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12074]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12075]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12076]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12077]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12078]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12079]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12080]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12081]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12082]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12083]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12084]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12085]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12086]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12087]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12088]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12089]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12090]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12091]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12092]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12093]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_28[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]))) {
        ++(vlSymsp->__Vcoverage[12094]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_28[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[12095]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_28[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_28[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[2U]))) {
        ++(vlSymsp->__Vcoverage[12096]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_28[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_28[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_28[2U]))) {
        ++(vlSymsp->__Vcoverage[12097]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_28[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_28[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_28[2U]));
    }
}

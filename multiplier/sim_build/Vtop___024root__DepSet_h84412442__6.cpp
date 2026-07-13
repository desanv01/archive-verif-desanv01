// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20068]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20069]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20070]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20071]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20072]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20073]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20074]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20075]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20076]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20077]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20078]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20079]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20080]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20081]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20082]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20083]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20084]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20085]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20086]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20087]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20088]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20089]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20090]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20091]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20092]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20093]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20094]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20095]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_27[0U] = vlSelfRef.multiplier__DOT__A27__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_27[1U] = vlSelfRef.multiplier__DOT__A27__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_27[2U] = vlSelfRef.multiplier__DOT__A27__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_27[3U] = vlSelfRef.multiplier__DOT__A27__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A45__DOT__sum, vlSelfRef.multiplier__DOT__A26__DOT__sum, vlSelfRef.multiplier__DOT__A27__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20096]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20097]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20098]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20099]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20100]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20101]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20102]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20103]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20104]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20105]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20106]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20107]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20108]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20109]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20110]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20111]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20112]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20113]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20114]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20115]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20116]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20117]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20118]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20119]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20120]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20121]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20122]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20123]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20124]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20125]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20126]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A28__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20127]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20128]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20129]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20130]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20131]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20132]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20133]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20134]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20135]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20136]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20137]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20138]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20139]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20140]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20141]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20142]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20143]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20144]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20145]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20146]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20147]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20148]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20149]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20150]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20151]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20152]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20153]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20154]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20155]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20156]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20157]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20158]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A28__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20159]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20160]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20161]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20162]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20163]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20164]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20165]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20166]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20167]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20168]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20169]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20170]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20171]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20172]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20173]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20174]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20175]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20176]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20177]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20178]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20179]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20180]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20181]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20182]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20183]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20184]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20185]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20186]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20187]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20188]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20189]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20190]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A28__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20191]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20192]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20193]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20194]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20195]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20196]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20197]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20198]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20199]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20200]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20201]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20202]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20203]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20204]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20205]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20206]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20207]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20208]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20209]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20210]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20211]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20212]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20213]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20214]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20215]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20216]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20217]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20218]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20219]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20220]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20221]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20222]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A28__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20223]);
        vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A28__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A28__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_28[0U] = vlSelfRef.multiplier__DOT__A28__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_28[1U] = vlSelfRef.multiplier__DOT__A28__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_28[2U] = vlSelfRef.multiplier__DOT__A28__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_28[3U] = vlSelfRef.multiplier__DOT__A28__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20224]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20225]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20226]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20227]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20228]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20229]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20230]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20231]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20232]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20233]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20234]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20235]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20236]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20237]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20238]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20239]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20240]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20241]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20242]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20243]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20244]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20245]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20246]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20247]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20248]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20249]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20250]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20251]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20252]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20253]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20254]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A29__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20255]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20256]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20257]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20258]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20259]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20260]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20261]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20262]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20263]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20264]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20265]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20266]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20267]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20268]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20269]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20270]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20271]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20272]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20273]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20274]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20275]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20276]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20277]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20278]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20279]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20280]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20281]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20282]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20283]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20284]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20285]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20286]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A29__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20287]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20288]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20289]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20290]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20291]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20292]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20293]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20294]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20295]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20296]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20297]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20298]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20299]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20300]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20301]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20302]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20303]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20304]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20305]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20306]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20307]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20308]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20309]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20310]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20311]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20312]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20313]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20314]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20315]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20316]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20317]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20318]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A29__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20319]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20320]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20321]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20322]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20323]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20324]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20325]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20326]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20327]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20328]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20329]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20330]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20331]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20332]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20333]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20334]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20335]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20336]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20337]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20338]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20339]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20340]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20341]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20342]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20343]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20344]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20345]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20346]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20347]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20348]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20349]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20350]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A29__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20351]);
        vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A29__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A29__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_29[0U] = vlSelfRef.multiplier__DOT__A29__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_29[1U] = vlSelfRef.multiplier__DOT__A29__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_29[2U] = vlSelfRef.multiplier__DOT__A29__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_29[3U] = vlSelfRef.multiplier__DOT__A29__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A46__DOT__sum, vlSelfRef.multiplier__DOT__A28__DOT__sum, vlSelfRef.multiplier__DOT__A29__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20352]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20353]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20354]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20355]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20356]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20357]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20358]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20359]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20360]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20361]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20362]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20363]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20364]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20365]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20366]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20367]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20368]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20369]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20370]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20371]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20372]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20373]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20374]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20375]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20376]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20377]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20378]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20379]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20380]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20381]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20382]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A30__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20383]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20384]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20385]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20386]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20387]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20388]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20389]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20390]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20391]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20392]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20393]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20394]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20395]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20396]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20397]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20398]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20399]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20400]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20401]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20402]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20403]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20404]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20405]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20406]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20407]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20408]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20409]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20410]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20411]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20412]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20413]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20414]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A30__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20415]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20416]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20417]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20418]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20419]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20420]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20421]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20422]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20423]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20424]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20425]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20426]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20427]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20428]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20429]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20430]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20431]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20432]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20433]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20434]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20435]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20436]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20437]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20438]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20439]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20440]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20441]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20442]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20443]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20444]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20445]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20446]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A30__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20447]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20448]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20449]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20450]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20451]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20452]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20453]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20454]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20455]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20456]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20457]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20458]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20459]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20460]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20461]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20462]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20463]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20464]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20465]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20466]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20467]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20468]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20469]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20470]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20471]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20472]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20473]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20474]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20475]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20476]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20477]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20478]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A30__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20479]);
        vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A30__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A30__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_30[0U] = vlSelfRef.multiplier__DOT__A30__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_30[1U] = vlSelfRef.multiplier__DOT__A30__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_30[2U] = vlSelfRef.multiplier__DOT__A30__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_30[3U] = vlSelfRef.multiplier__DOT__A30__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20480]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20481]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20482]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20483]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20484]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20485]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20486]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20487]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20488]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20489]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20490]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20491]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20492]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20493]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20494]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20495]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20496]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20497]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20498]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20499]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20500]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20501]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20502]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20503]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20504]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20505]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20506]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20507]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20508]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20509]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20510]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A31__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20511]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20512]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20513]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20514]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20515]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20516]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20517]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20518]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20519]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20520]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20521]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20522]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20523]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20524]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20525]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20526]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20527]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20528]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20529]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20530]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20531]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20532]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20533]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20534]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20535]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20536]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20537]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20538]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20539]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20540]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20541]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20542]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A31__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20543]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20544]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20545]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20546]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20547]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20548]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20549]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20550]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20551]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20552]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20553]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20554]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20555]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20556]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20557]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20558]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20559]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20560]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20561]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20562]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20563]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20564]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20565]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20566]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20567]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20568]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20569]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20570]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20571]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20572]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20573]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20574]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A31__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20575]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20576]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20577]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20578]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20579]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20580]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20581]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20582]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20583]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20584]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20585]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20586]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20587]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20588]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20589]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20590]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20591]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20592]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20593]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20594]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20595]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20596]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20597]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20598]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20599]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20600]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20601]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20602]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20603]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20604]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20605]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20606]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A31__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20607]);
        vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A31__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A31__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_31[0U] = vlSelfRef.multiplier__DOT__A31__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_31[1U] = vlSelfRef.multiplier__DOT__A31__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_31[2U] = vlSelfRef.multiplier__DOT__A31__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_31[3U] = vlSelfRef.multiplier__DOT__A31__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A47__DOT__sum, vlSelfRef.multiplier__DOT__A30__DOT__sum, vlSelfRef.multiplier__DOT__A31__DOT__sum);
    vlSelfRef.multiplier__DOT__A32__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_0[0U];
    vlSelfRef.multiplier__DOT__A32__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_0[1U];
    vlSelfRef.multiplier__DOT__A32__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_0[2U];
    vlSelfRef.multiplier__DOT__A32__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_0[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8448]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8449]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8450]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8451]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8452]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8453]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8454]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8455]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8456]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8457]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8458]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8459]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8460]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8461]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8462]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8463]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8464]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8465]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8466]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8467]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8468]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8469]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8470]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8471]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8472]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8473]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8474]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8475]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8476]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8477]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]))) {
        ++(vlSymsp->__Vcoverage[8478]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_0[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8479]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_0[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8480]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8481]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8482]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8483]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8484]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8485]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8486]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8487]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8488]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8489]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8490]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8491]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8492]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8493]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8494]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8495]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8496]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8497]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8498]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8499]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8500]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8501]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8502]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8503]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8504]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8505]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8506]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8507]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8508]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8509]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]))) {
        ++(vlSymsp->__Vcoverage[8510]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_0[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8511]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_0[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8512]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8513]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8514]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8515]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8516]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8517]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8518]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8519]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8520]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8521]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8522]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8523]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8524]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8525]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8526]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8527]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8528]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8529]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8530]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8531]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8532]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8533]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8534]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8535]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8536]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8537]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8538]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8539]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8540]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8541]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]))) {
        ++(vlSymsp->__Vcoverage[8542]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_0[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8543]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_0[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8544]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8545]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8546]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8547]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8548]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8549]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8550]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8551]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8552]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8553]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8554]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8555]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8556]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8557]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8558]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8559]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8560]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8561]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8562]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8563]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8564]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8565]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8566]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8567]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8568]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8569]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8570]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8571]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8572]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8573]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]))) {
        ++(vlSymsp->__Vcoverage[8574]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_0[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8575]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_0[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_0[3U]));
    }
    vlSelfRef.multiplier__DOT__A32__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_1[0U];
    vlSelfRef.multiplier__DOT__A32__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_1[1U];
    vlSelfRef.multiplier__DOT__A32__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_1[2U];
    vlSelfRef.multiplier__DOT__A32__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_1[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8576]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8577]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8578]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8579]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8580]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8581]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8582]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8583]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8584]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8585]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8586]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8587]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8588]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8589]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8590]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8591]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8592]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8593]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8594]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8595]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8596]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8597]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8598]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8599]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8600]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8601]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8602]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8603]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8604]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8605]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]))) {
        ++(vlSymsp->__Vcoverage[8606]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_1[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8607]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_1[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8608]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8609]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8610]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8611]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8612]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8613]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8614]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8615]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8616]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8617]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8618]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8619]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8620]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8621]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8622]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8623]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8624]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8625]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8626]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8627]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8628]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8629]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8630]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8631]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8632]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8633]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8634]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8635]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8636]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8637]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]))) {
        ++(vlSymsp->__Vcoverage[8638]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_1[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8639]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_1[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8640]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8641]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8642]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8643]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8644]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8645]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8646]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8647]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8648]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8649]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8650]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8651]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8652]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8653]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8654]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8655]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8656]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8657]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8658]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8659]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8660]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8661]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8662]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8663]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8664]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8665]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8666]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8667]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8668]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8669]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]))) {
        ++(vlSymsp->__Vcoverage[8670]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_1[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8671]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_1[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8672]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8673]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8674]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8675]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8676]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8677]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8678]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8679]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8680]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8681]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8682]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8683]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8684]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8685]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8686]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8687]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8688]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8689]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8690]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8691]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8692]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8693]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8694]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8695]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8696]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8697]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8698]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8699]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8700]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8701]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]))) {
        ++(vlSymsp->__Vcoverage[8702]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_1[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8703]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_1[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_1[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20608]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20609]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20610]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20611]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20612]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20613]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20614]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20615]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20616]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20617]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20618]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20619]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20620]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20621]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20622]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20623]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20624]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20625]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20626]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20627]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20628]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20629]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20630]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20631]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20632]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20633]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20634]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20635]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20636]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20637]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20638]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A32__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20639]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20640]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20641]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20642]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20643]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20644]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20645]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20646]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20647]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20648]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20649]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20650]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20651]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20652]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20653]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20654]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20655]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20656]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20657]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20658]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20659]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20660]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20661]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20662]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20663]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20664]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20665]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20666]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20667]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20668]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20669]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20670]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A32__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20671]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20672]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20673]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20674]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20675]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20676]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20677]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20678]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20679]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20680]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20681]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20682]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20683]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20684]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20685]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20686]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20687]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20688]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20689]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20690]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20691]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20692]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20693]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20694]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20695]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20696]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20697]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20698]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20699]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20700]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20701]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20702]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A32__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20703]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20704]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20705]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20706]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20707]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20708]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20709]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20710]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20711]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20712]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20713]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20714]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20715]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20716]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20717]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20718]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20719]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20720]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20721]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20722]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20723]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20724]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20725]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20726]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20727]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20728]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20729]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20730]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20731]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20732]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20733]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20734]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A32__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20735]);
        vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A32__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A32__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_0[0U] = vlSelfRef.multiplier__DOT__A32__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_0[1U] = vlSelfRef.multiplier__DOT__A32__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_0[2U] = vlSelfRef.multiplier__DOT__A32__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_0[3U] = vlSelfRef.multiplier__DOT__A32__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A33__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_2[0U];
    vlSelfRef.multiplier__DOT__A33__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_2[1U];
    vlSelfRef.multiplier__DOT__A33__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_2[2U];
    vlSelfRef.multiplier__DOT__A33__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_2[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8704]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8705]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8706]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8707]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8708]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8709]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8710]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8711]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8712]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8713]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8714]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8715]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8716]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8717]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8718]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8719]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8720]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8721]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8722]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8723]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8724]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8725]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8726]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8727]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8728]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8729]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8730]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8731]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8732]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8733]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]))) {
        ++(vlSymsp->__Vcoverage[8734]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_2[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8735]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_2[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8736]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8737]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8738]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8739]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8740]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8741]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8742]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8743]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8744]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8745]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8746]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8747]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8748]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8749]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8750]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8751]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8752]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8753]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8754]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8755]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8756]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8757]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8758]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8759]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8760]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8761]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8762]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8763]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8764]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8765]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]))) {
        ++(vlSymsp->__Vcoverage[8766]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_2[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8767]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_2[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8768]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8769]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8770]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8771]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8772]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8773]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8774]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8775]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8776]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8777]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8778]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8779]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8780]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8781]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8782]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8783]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8784]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8785]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8786]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8787]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8788]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8789]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8790]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8791]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8792]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8793]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8794]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8795]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8796]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8797]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]))) {
        ++(vlSymsp->__Vcoverage[8798]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_2[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8799]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_2[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8800]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8801]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8802]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8803]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8804]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8805]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8806]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8807]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8808]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8809]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8810]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8811]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8812]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8813]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8814]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8815]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8816]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8817]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8818]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8819]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8820]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8821]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8822]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8823]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8824]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8825]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8826]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8827]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8828]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8829]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]))) {
        ++(vlSymsp->__Vcoverage[8830]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_2[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8831]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_2[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_2[3U]));
    }
    vlSelfRef.multiplier__DOT__A33__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_3[0U];
    vlSelfRef.multiplier__DOT__A33__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_3[1U];
    vlSelfRef.multiplier__DOT__A33__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_3[2U];
    vlSelfRef.multiplier__DOT__A33__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_3[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8832]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8833]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8834]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8835]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8836]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8837]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8838]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8839]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8840]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8841]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8842]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8843]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8844]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8845]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8846]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8847]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8848]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8849]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8850]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8851]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8852]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8853]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8854]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8855]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8856]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8857]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8858]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8859]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8860]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8861]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]))) {
        ++(vlSymsp->__Vcoverage[8862]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_3[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8863]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_3[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8864]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8865]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8866]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8867]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8868]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8869]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8870]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8871]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8872]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8873]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8874]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8875]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8876]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8877]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8878]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8879]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8880]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8881]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8882]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8883]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8884]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8885]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8886]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8887]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8888]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8889]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8890]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8891]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8892]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8893]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]))) {
        ++(vlSymsp->__Vcoverage[8894]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_3[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8895]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_3[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8896]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8897]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8898]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8899]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8900]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8901]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8902]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8903]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8904]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8905]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8906]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8907]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8908]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8909]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8910]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8911]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8912]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8913]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8914]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8915]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8916]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8917]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8918]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8919]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8920]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8921]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8922]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8923]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8924]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8925]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]))) {
        ++(vlSymsp->__Vcoverage[8926]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_3[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8927]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_3[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8928]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8929]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8930]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8931]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8932]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8933]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8934]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8935]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8936]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8937]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8938]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8939]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8940]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8941]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8942]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8943]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8944]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8945]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8946]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8947]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8948]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8949]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8950]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8951]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8952]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8953]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8954]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8955]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8956]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8957]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]))) {
        ++(vlSymsp->__Vcoverage[8958]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_3[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8959]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_3[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_3[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20736]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20737]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20738]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20739]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20740]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20741]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20742]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20743]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20744]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20745]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20746]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20747]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20748]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20749]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20750]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20751]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20752]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20753]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20754]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20755]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20756]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20757]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20758]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20759]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20760]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20761]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20762]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20763]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20764]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20765]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20766]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A33__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20767]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20768]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20769]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20770]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20771]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20772]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20773]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20774]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20775]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20776]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20777]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20778]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20779]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20780]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20781]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20782]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20783]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20784]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20785]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20786]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20787]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20788]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20789]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20790]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20791]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20792]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20793]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20794]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20795]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20796]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20797]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20798]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A33__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20799]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20800]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20801]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20802]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20803]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20804]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20805]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20806]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20807]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20808]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20809]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20810]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20811]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20812]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20813]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20814]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20815]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20816]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20817]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20818]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20819]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20820]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20821]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20822]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20823]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20824]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20825]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20826]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20827]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20828]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20829]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20830]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A33__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20831]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20832]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20833]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20834]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20835]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20836]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20837]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20838]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20839]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20840]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20841]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20842]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20843]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20844]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20845]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20846]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20847]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20848]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20849]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20850]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20851]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20852]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20853]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20854]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20855]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20856]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20857]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20858]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20859]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20860]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20861]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20862]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A33__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20863]);
        vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A33__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A33__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_1[0U] = vlSelfRef.multiplier__DOT__A33__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_1[1U] = vlSelfRef.multiplier__DOT__A33__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_1[2U] = vlSelfRef.multiplier__DOT__A33__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_1[3U] = vlSelfRef.multiplier__DOT__A33__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A48__DOT__sum, vlSelfRef.multiplier__DOT__A32__DOT__sum, vlSelfRef.multiplier__DOT__A33__DOT__sum);
    vlSelfRef.multiplier__DOT__A34__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_4[0U];
    vlSelfRef.multiplier__DOT__A34__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_4[1U];
    vlSelfRef.multiplier__DOT__A34__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_4[2U];
    vlSelfRef.multiplier__DOT__A34__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_4[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8960]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8961]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8962]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8963]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8964]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8965]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8966]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8967]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8968]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8969]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8970]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8971]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8972]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8973]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8974]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8975]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8976]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8977]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8978]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8979]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8980]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8981]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8982]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8983]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8984]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8985]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8986]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8987]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8988]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8989]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]))) {
        ++(vlSymsp->__Vcoverage[8990]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_4[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8991]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_4[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[8992]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[8993]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[8994]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[8995]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[8996]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[8997]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[8998]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[8999]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9000]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9001]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9002]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9003]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9004]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9005]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9006]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9007]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9008]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9009]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9010]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9011]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9012]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9013]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9014]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9015]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9016]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9017]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9018]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9019]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9020]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9021]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]))) {
        ++(vlSymsp->__Vcoverage[9022]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_4[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9023]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_4[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9024]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9025]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9026]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9027]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9028]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9029]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9030]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9031]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9032]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9033]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9034]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9035]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9036]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9037]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9038]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9039]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9040]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9041]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9042]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9043]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9044]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9045]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9046]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9047]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9048]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9049]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9050]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9051]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9052]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9053]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]))) {
        ++(vlSymsp->__Vcoverage[9054]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_4[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9055]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_4[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9056]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9057]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9058]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9059]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9060]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9061]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9062]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9063]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9064]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9065]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9066]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9067]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9068]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9069]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9070]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9071]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9072]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9073]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9074]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9075]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9076]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9077]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9078]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9079]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9080]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9081]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9082]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9083]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9084]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9085]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]))) {
        ++(vlSymsp->__Vcoverage[9086]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_4[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9087]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_4[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_4[3U]));
    }
    vlSelfRef.multiplier__DOT__A34__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_5[0U];
    vlSelfRef.multiplier__DOT__A34__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_5[1U];
    vlSelfRef.multiplier__DOT__A34__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_5[2U];
    vlSelfRef.multiplier__DOT__A34__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_5[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9088]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9089]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9090]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9091]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9092]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9093]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9094]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9095]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9096]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9097]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9098]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9099]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9100]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9101]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9102]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9103]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9104]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9105]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9106]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9107]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9108]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9109]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9110]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9111]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9112]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9113]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9114]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9115]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9116]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9117]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]))) {
        ++(vlSymsp->__Vcoverage[9118]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_5[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9119]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_5[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9120]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9121]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9122]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9123]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9124]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9125]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9126]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9127]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9128]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9129]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9130]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9131]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9132]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9133]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9134]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9135]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9136]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9137]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9138]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9139]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9140]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9141]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9142]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9143]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9144]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9145]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9146]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9147]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9148]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9149]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]))) {
        ++(vlSymsp->__Vcoverage[9150]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_5[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9151]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_5[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9152]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9153]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9154]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9155]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9156]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9157]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9158]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9159]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9160]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9161]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9162]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9163]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9164]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9165]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9166]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9167]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9168]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9169]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9170]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9171]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9172]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9173]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9174]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9175]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9176]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9177]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9178]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9179]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9180]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9181]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]))) {
        ++(vlSymsp->__Vcoverage[9182]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_5[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9183]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_5[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9184]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9185]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9186]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9187]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9188]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9189]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9190]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9191]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9192]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9193]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9194]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9195]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9196]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9197]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9198]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9199]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9200]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9201]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9202]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9203]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9204]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9205]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9206]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9207]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9208]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9209]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9210]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9211]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9212]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9213]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]))) {
        ++(vlSymsp->__Vcoverage[9214]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_5[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9215]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_5[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_5[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20864]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20865]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20866]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20867]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20868]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20869]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20870]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20871]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20872]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20873]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20874]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20875]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20876]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20877]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20878]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20879]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20880]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20881]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20882]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20883]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20884]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20885]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20886]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20887]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20888]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20889]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20890]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20891]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20892]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20893]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20894]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A34__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20895]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20896]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20897]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20898]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20899]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20900]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20901]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20902]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20903]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20904]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20905]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20906]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20907]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20908]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20909]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20910]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20911]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20912]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20913]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20914]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20915]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20916]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20917]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20918]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20919]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20920]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20921]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20922]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20923]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20924]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20925]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20926]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A34__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20927]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20928]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20929]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20930]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20931]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20932]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20933]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20934]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20935]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20936]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20937]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20938]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20939]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20940]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20941]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20942]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20943]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20944]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20945]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20946]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20947]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20948]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20949]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20950]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20951]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20952]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20953]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20954]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20955]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20956]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20957]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20958]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A34__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20959]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20960]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20961]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20962]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20963]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20964]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20965]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20966]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20967]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20968]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20969]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20970]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20971]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20972]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20973]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20974]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20975]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20976]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20977]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20978]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20979]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20980]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20981]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20982]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20983]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20984]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20985]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20986]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20987]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20988]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20989]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20990]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A34__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20991]);
        vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A34__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A34__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l1_2[0U] = vlSelfRef.multiplier__DOT__A34__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l1_2[1U] = vlSelfRef.multiplier__DOT__A34__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l1_2[2U] = vlSelfRef.multiplier__DOT__A34__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l1_2[3U] = vlSelfRef.multiplier__DOT__A34__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__A35__DOT__a[0U] = vlSelfRef.multiplier__DOT__l0_6[0U];
    vlSelfRef.multiplier__DOT__A35__DOT__a[1U] = vlSelfRef.multiplier__DOT__l0_6[1U];
    vlSelfRef.multiplier__DOT__A35__DOT__a[2U] = vlSelfRef.multiplier__DOT__l0_6[2U];
    vlSelfRef.multiplier__DOT__A35__DOT__a[3U] = vlSelfRef.multiplier__DOT__l0_6[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9216]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9217]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9218]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9219]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9220]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9221]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9222]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9223]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9224]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9225]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9226]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9227]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9228]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9229]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9230]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9231]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9232]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9233]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9234]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9235]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9236]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9237]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9238]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9239]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9240]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9241]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9242]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9243]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9244]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9245]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]))) {
        ++(vlSymsp->__Vcoverage[9246]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_6[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9247]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_6[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9248]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9249]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9250]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9251]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9252]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9253]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9254]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9255]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9256]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9257]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9258]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9259]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9260]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9261]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9262]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9263]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9264]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9265]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9266]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9267]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9268]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9269]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9270]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9271]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9272]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9273]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9274]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9275]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9276]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9277]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]))) {
        ++(vlSymsp->__Vcoverage[9278]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_6[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9279]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_6[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9280]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9281]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9282]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9283]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9284]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9285]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9286]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9287]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9288]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9289]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9290]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9291]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9292]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9293]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9294]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9295]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9296]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9297]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9298]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9299]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9300]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9301]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9302]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9303]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9304]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9305]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9306]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9307]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9308]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9309]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]))) {
        ++(vlSymsp->__Vcoverage[9310]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_6[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9311]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_6[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9312]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9313]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9314]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9315]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9316]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9317]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9318]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9319]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9320]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9321]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9322]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9323]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9324]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9325]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9326]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9327]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9328]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9329]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9330]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9331]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9332]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9333]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9334]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9335]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9336]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9337]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9338]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9339]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9340]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9341]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]))) {
        ++(vlSymsp->__Vcoverage[9342]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_6[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9343]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_6[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_6[3U]));
    }
    vlSelfRef.multiplier__DOT__A35__DOT__b[0U] = vlSelfRef.multiplier__DOT__l0_7[0U];
    vlSelfRef.multiplier__DOT__A35__DOT__b[1U] = vlSelfRef.multiplier__DOT__l0_7[1U];
    vlSelfRef.multiplier__DOT__A35__DOT__b[2U] = vlSelfRef.multiplier__DOT__l0_7[2U];
    vlSelfRef.multiplier__DOT__A35__DOT__b[3U] = vlSelfRef.multiplier__DOT__l0_7[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9344]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9345]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9346]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9347]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9348]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9349]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9350]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9351]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9352]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9353]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9354]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9355]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9356]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9357]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9358]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9359]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9360]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9361]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9362]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9363]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9364]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9365]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9366]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9367]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9368]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9369]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9370]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9371]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9372]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9373]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]))) {
        ++(vlSymsp->__Vcoverage[9374]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_7[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9375]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_7[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9376]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9377]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9378]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9379]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9380]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9381]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9382]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9383]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9384]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9385]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9386]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9387]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9388]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9389]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9390]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9391]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9392]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9393]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9394]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9395]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9396]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9397]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9398]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9399]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9400]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9401]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9402]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9403]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9404]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9405]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]))) {
        ++(vlSymsp->__Vcoverage[9406]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_7[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9407]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_7[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9408]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9409]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9410]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9411]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9412]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9413]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9414]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9415]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9416]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9417]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9418]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9419]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9420]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9421]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9422]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9423]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9424]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9425]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9426]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9427]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9428]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9429]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9430]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9431]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9432]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9433]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9434]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9435]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9436]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9437]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]))) {
        ++(vlSymsp->__Vcoverage[9438]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_7[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9439]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_7[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9440]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9441]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9442]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9443]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9444]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9445]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9446]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9447]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9448]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9449]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9450]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9451]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9452]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9453]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9454]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9455]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9456]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9457]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9458]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9459]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9460]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9461]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9462]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9463]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9464]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9465]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9466]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9467]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9468]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9469]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l0_7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]))) {
        ++(vlSymsp->__Vcoverage[9470]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l0_7[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9471]);
        vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l0_7[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l0_7[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20992]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20993]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20994]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20995]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20996]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20997]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20998]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[20999]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21000]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21001]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21002]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21003]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21004]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21005]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21006]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21007]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21008]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21009]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21010]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21011]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21012]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21013]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21014]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21015]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21016]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21017]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21018]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21019]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21020]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21021]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[21022]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A35__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[21023]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21024]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21025]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21026]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21027]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21028]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21029]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21030]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21031]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21032]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21033]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21034]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21035]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21036]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A35__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[21037]);
        vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A35__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A35__DOT__sum[1U]));
    }
}

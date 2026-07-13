// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18076]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18077]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18078]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A12__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18079]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18080]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18081]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18082]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18083]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18084]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18085]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18086]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18087]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18088]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18089]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18090]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18091]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18092]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18093]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18094]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18095]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18096]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18097]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18098]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18099]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18100]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18101]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18102]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18103]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18104]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18105]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18106]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18107]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18108]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18109]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18110]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A12__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18111]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18112]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18113]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18114]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18115]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18116]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18117]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18118]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18119]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18120]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18121]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18122]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18123]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18124]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18125]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18126]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18127]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18128]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18129]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18130]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18131]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18132]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18133]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18134]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18135]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18136]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18137]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18138]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18139]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18140]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18141]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18142]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A12__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18143]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18144]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18145]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18146]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18147]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18148]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18149]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18150]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18151]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18152]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18153]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18154]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18155]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18156]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18157]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18158]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18159]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18160]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18161]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18162]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18163]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18164]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18165]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18166]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18167]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18168]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18169]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18170]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18171]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18172]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18173]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18174]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A12__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18175]);
        vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A12__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A12__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_12[0U] = vlSelfRef.multiplier__DOT__A12__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_12[1U] = vlSelfRef.multiplier__DOT__A12__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_12[2U] = vlSelfRef.multiplier__DOT__A12__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_12[3U] = vlSelfRef.multiplier__DOT__A12__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18176]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18177]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18178]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18179]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18180]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18181]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18182]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18183]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18184]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18185]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18186]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18187]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18188]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18189]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18190]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18191]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18192]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18193]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18194]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18195]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18196]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18197]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18198]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18199]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18200]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18201]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18202]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18203]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18204]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18205]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18206]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A13__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18207]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18208]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18209]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18210]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18211]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18212]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18213]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18214]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18215]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18216]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18217]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18218]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18219]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18220]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18221]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18222]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18223]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18224]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18225]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18226]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18227]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18228]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18229]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18230]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18231]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18232]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18233]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18234]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18235]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18236]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18237]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18238]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A13__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18239]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18240]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18241]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18242]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18243]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18244]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18245]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18246]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18247]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18248]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18249]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18250]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18251]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18252]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18253]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18254]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18255]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18256]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18257]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18258]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18259]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18260]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18261]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18262]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18263]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18264]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18265]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18266]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18267]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18268]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18269]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18270]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A13__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18271]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18272]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18273]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18274]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18275]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18276]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18277]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18278]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18279]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18280]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18281]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18282]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18283]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18284]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18285]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18286]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18287]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18288]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18289]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18290]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18291]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18292]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18293]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18294]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18295]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18296]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18297]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18298]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18299]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18300]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18301]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18302]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A13__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18303]);
        vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A13__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A13__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_13[0U] = vlSelfRef.multiplier__DOT__A13__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_13[1U] = vlSelfRef.multiplier__DOT__A13__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_13[2U] = vlSelfRef.multiplier__DOT__A13__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_13[3U] = vlSelfRef.multiplier__DOT__A13__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A38__DOT__sum, vlSelfRef.multiplier__DOT__A12__DOT__sum, vlSelfRef.multiplier__DOT__A13__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18304]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18305]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18306]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18307]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18308]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18309]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18310]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18311]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18312]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18313]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18314]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18315]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18316]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18317]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18318]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18319]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18320]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18321]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18322]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18323]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18324]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18325]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18326]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18327]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18328]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18329]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18330]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18331]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18332]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18333]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18334]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A14__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18335]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18336]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18337]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18338]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18339]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18340]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18341]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18342]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18343]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18344]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18345]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18346]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18347]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18348]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18349]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18350]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18351]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18352]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18353]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18354]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18355]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18356]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18357]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18358]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18359]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18360]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18361]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18362]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18363]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18364]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18365]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18366]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A14__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18367]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18368]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18369]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18370]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18371]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18372]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18373]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18374]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18375]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18376]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18377]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18378]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18379]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18380]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18381]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18382]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18383]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18384]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18385]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18386]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18387]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18388]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18389]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18390]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18391]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18392]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18393]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18394]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18395]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18396]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18397]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18398]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A14__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18399]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18400]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18401]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18402]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18403]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18404]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18405]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18406]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18407]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18408]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18409]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18410]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18411]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18412]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18413]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18414]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18415]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18416]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18417]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18418]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18419]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18420]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18421]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18422]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18423]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18424]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18425]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18426]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18427]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18428]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18429]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18430]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A14__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18431]);
        vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A14__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A14__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_14[0U] = vlSelfRef.multiplier__DOT__A14__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_14[1U] = vlSelfRef.multiplier__DOT__A14__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_14[2U] = vlSelfRef.multiplier__DOT__A14__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_14[3U] = vlSelfRef.multiplier__DOT__A14__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18432]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18433]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18434]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18435]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18436]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18437]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18438]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18439]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18440]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18441]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18442]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18443]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18444]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18445]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18446]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18447]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18448]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18449]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18450]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18451]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18452]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18453]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18454]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18455]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18456]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18457]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18458]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18459]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18460]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18461]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18462]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A15__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18463]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18464]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18465]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18466]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18467]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18468]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18469]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18470]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18471]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18472]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18473]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18474]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18475]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18476]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18477]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18478]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18479]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18480]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18481]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18482]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18483]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18484]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18485]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18486]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18487]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18488]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18489]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18490]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18491]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18492]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18493]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18494]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A15__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18495]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18496]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18497]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18498]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18499]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18500]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18501]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18502]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18503]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18504]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18505]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18506]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18507]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18508]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18509]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18510]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18511]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18512]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18513]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18514]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18515]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18516]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18517]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18518]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18519]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18520]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18521]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18522]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18523]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18524]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18525]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18526]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A15__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18527]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18528]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18529]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18530]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18531]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18532]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18533]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18534]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18535]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18536]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18537]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18538]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18539]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18540]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18541]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18542]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18543]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18544]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18545]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18546]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18547]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18548]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18549]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18550]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18551]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18552]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18553]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18554]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18555]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18556]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18557]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18558]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A15__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18559]);
        vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A15__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A15__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_15[0U] = vlSelfRef.multiplier__DOT__A15__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_15[1U] = vlSelfRef.multiplier__DOT__A15__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_15[2U] = vlSelfRef.multiplier__DOT__A15__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_15[3U] = vlSelfRef.multiplier__DOT__A15__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A39__DOT__sum, vlSelfRef.multiplier__DOT__A14__DOT__sum, vlSelfRef.multiplier__DOT__A15__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18560]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18561]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18562]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18563]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18564]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18565]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18566]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18567]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18568]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18569]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18570]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18571]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18572]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18573]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18574]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18575]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18576]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18577]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18578]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18579]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18580]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18581]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18582]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18583]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18584]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18585]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18586]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18587]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18588]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18589]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18590]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A16__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18591]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18592]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18593]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18594]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18595]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18596]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18597]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18598]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18599]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18600]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18601]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18602]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18603]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18604]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18605]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18606]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18607]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18608]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18609]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18610]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18611]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18612]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18613]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18614]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18615]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18616]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18617]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18618]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18619]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18620]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18621]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18622]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A16__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18623]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18624]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18625]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18626]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18627]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18628]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18629]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18630]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18631]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18632]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18633]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18634]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18635]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18636]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18637]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18638]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18639]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18640]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18641]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18642]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18643]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18644]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18645]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18646]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18647]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18648]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18649]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18650]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18651]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18652]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18653]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18654]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A16__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18655]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18656]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18657]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18658]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18659]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18660]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18661]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18662]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18663]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18664]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18665]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18666]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18667]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18668]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18669]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18670]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18671]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18672]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18673]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18674]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18675]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18676]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18677]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18678]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18679]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18680]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18681]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18682]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18683]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18684]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18685]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18686]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A16__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18687]);
        vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A16__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A16__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_16[0U] = vlSelfRef.multiplier__DOT__A16__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_16[1U] = vlSelfRef.multiplier__DOT__A16__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_16[2U] = vlSelfRef.multiplier__DOT__A16__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_16[3U] = vlSelfRef.multiplier__DOT__A16__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18688]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18689]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18690]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18691]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18692]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18693]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18694]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18695]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18696]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18697]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18698]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18699]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18700]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18701]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18702]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18703]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18704]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18705]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18706]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18707]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18708]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18709]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18710]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18711]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18712]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18713]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18714]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18715]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18716]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18717]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18718]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A17__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18719]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18720]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18721]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18722]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18723]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18724]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18725]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18726]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18727]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18728]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18729]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18730]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18731]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18732]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18733]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18734]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18735]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18736]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18737]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18738]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18739]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18740]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18741]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18742]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18743]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18744]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18745]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18746]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18747]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18748]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18749]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18750]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A17__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18751]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18752]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18753]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18754]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18755]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18756]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18757]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18758]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18759]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18760]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18761]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18762]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18763]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18764]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18765]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18766]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18767]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18768]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18769]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18770]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18771]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18772]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18773]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18774]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18775]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18776]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18777]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18778]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18779]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18780]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18781]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18782]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A17__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18783]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18784]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18785]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18786]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18787]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18788]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18789]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18790]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18791]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18792]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18793]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18794]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18795]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18796]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18797]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18798]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18799]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18800]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18801]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18802]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18803]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18804]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18805]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18806]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18807]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18808]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18809]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18810]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18811]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18812]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18813]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18814]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A17__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18815]);
        vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A17__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A17__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_17[0U] = vlSelfRef.multiplier__DOT__A17__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_17[1U] = vlSelfRef.multiplier__DOT__A17__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_17[2U] = vlSelfRef.multiplier__DOT__A17__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_17[3U] = vlSelfRef.multiplier__DOT__A17__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A40__DOT__sum, vlSelfRef.multiplier__DOT__A16__DOT__sum, vlSelfRef.multiplier__DOT__A17__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18816]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18817]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18818]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18819]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18820]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18821]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18822]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18823]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18824]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18825]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18826]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18827]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18828]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18829]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18830]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18831]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18832]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18833]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18834]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18835]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18836]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18837]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18838]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18839]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18840]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18841]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18842]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18843]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18844]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18845]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18846]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A18__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18847]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18848]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18849]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18850]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18851]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18852]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18853]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18854]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18855]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18856]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18857]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18858]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18859]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18860]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18861]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18862]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18863]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18864]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18865]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18866]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18867]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18868]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18869]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18870]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18871]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18872]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18873]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18874]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18875]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18876]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18877]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18878]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A18__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18879]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18880]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18881]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18882]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18883]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18884]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18885]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18886]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18887]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18888]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18889]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18890]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18891]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18892]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18893]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18894]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18895]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18896]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18897]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18898]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18899]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18900]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18901]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18902]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18903]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18904]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18905]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18906]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18907]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18908]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18909]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[18910]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A18__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18911]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18912]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18913]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18914]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18915]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18916]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18917]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18918]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18919]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18920]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18921]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18922]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18923]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18924]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18925]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18926]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18927]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18928]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18929]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18930]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18931]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18932]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18933]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18934]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18935]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18936]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18937]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18938]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18939]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18940]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18941]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[18942]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A18__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18943]);
        vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A18__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A18__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_18[0U] = vlSelfRef.multiplier__DOT__A18__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_18[1U] = vlSelfRef.multiplier__DOT__A18__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_18[2U] = vlSelfRef.multiplier__DOT__A18__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_18[3U] = vlSelfRef.multiplier__DOT__A18__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18944]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18945]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18946]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18947]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18948]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18949]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18950]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18951]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18952]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18953]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18954]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18955]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18956]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18957]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18958]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18959]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18960]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18961]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18962]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18963]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18964]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18965]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18966]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18967]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18968]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18969]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18970]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18971]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18972]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18973]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[18974]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A19__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[18975]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18976]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18977]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18978]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18979]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18980]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18981]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18982]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18983]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18984]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18985]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18986]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18987]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18988]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18989]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18990]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18991]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18992]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18993]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18994]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18995]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18996]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18997]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18998]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[18999]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19000]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19001]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19002]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19003]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19004]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19005]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19006]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A19__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19007]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19008]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19009]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19010]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19011]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19012]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19013]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19014]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19015]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19016]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19017]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19018]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19019]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19020]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19021]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19022]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19023]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19024]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19025]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19026]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19027]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19028]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19029]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19030]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19031]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19032]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19033]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19034]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19035]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19036]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19037]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19038]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A19__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19039]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19040]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19041]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19042]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19043]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19044]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19045]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19046]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19047]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19048]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19049]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19050]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19051]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19052]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19053]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19054]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19055]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19056]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19057]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19058]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19059]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19060]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19061]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19062]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19063]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19064]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19065]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19066]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19067]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19068]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19069]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19070]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A19__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19071]);
        vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A19__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A19__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_19[0U] = vlSelfRef.multiplier__DOT__A19__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_19[1U] = vlSelfRef.multiplier__DOT__A19__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_19[2U] = vlSelfRef.multiplier__DOT__A19__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_19[3U] = vlSelfRef.multiplier__DOT__A19__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A41__DOT__sum, vlSelfRef.multiplier__DOT__A18__DOT__sum, vlSelfRef.multiplier__DOT__A19__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19072]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19073]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19074]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19075]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19076]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19077]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19078]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19079]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19080]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19081]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19082]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19083]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19084]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19085]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19086]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19087]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19088]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19089]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19090]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19091]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19092]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19093]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19094]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19095]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19096]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19097]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19098]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19099]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19100]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19101]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19102]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A20__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19103]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19104]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19105]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19106]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19107]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19108]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19109]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19110]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19111]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19112]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19113]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19114]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19115]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19116]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19117]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19118]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19119]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19120]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19121]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19122]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19123]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19124]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19125]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19126]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19127]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19128]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19129]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19130]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19131]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19132]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19133]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19134]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A20__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19135]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19136]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19137]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19138]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19139]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19140]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19141]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19142]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19143]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19144]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19145]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19146]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19147]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19148]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19149]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19150]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19151]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19152]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19153]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19154]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19155]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19156]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19157]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19158]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19159]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19160]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19161]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19162]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19163]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19164]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19165]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19166]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A20__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19167]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19168]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19169]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19170]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19171]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19172]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19173]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19174]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19175]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19176]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19177]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19178]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19179]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19180]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19181]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19182]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19183]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19184]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19185]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19186]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19187]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19188]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19189]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19190]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19191]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19192]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19193]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19194]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19195]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19196]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19197]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19198]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A20__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19199]);
        vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A20__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A20__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_20[0U] = vlSelfRef.multiplier__DOT__A20__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_20[1U] = vlSelfRef.multiplier__DOT__A20__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_20[2U] = vlSelfRef.multiplier__DOT__A20__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_20[3U] = vlSelfRef.multiplier__DOT__A20__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19200]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19201]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19202]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19203]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19204]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19205]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19206]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19207]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19208]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19209]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19210]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19211]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19212]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19213]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19214]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19215]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19216]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19217]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19218]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19219]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19220]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19221]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19222]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19223]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19224]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19225]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19226]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19227]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19228]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19229]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19230]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A21__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19231]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19232]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19233]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19234]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19235]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19236]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19237]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19238]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19239]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19240]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19241]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19242]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19243]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19244]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19245]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19246]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19247]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19248]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19249]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19250]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19251]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19252]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19253]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19254]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19255]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19256]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19257]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19258]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19259]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19260]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19261]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19262]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A21__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19263]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19264]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19265]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19266]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19267]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19268]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19269]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19270]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19271]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19272]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19273]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19274]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19275]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19276]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19277]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19278]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19279]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19280]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19281]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19282]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19283]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19284]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19285]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19286]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19287]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19288]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19289]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19290]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19291]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19292]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19293]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19294]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A21__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19295]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19296]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19297]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19298]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19299]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19300]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19301]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19302]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19303]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19304]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19305]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19306]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19307]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19308]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19309]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19310]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19311]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19312]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19313]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19314]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19315]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19316]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19317]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19318]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19319]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19320]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19321]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19322]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19323]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19324]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19325]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19326]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A21__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19327]);
        vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A21__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A21__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_21[0U] = vlSelfRef.multiplier__DOT__A21__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_21[1U] = vlSelfRef.multiplier__DOT__A21__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_21[2U] = vlSelfRef.multiplier__DOT__A21__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_21[3U] = vlSelfRef.multiplier__DOT__A21__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A42__DOT__sum, vlSelfRef.multiplier__DOT__A20__DOT__sum, vlSelfRef.multiplier__DOT__A21__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19328]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19329]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19330]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19331]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19332]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19333]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19334]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19335]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19336]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19337]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19338]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19339]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19340]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19341]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19342]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19343]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19344]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19345]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19346]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19347]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19348]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19349]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19350]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19351]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19352]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19353]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19354]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19355]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19356]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19357]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19358]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A22__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19359]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19360]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19361]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19362]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19363]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19364]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19365]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19366]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19367]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19368]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19369]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19370]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19371]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19372]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19373]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19374]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19375]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19376]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19377]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19378]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19379]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19380]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19381]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19382]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19383]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19384]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19385]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19386]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19387]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19388]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19389]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19390]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A22__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19391]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19392]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19393]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19394]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19395]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19396]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19397]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19398]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19399]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19400]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19401]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19402]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19403]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19404]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19405]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19406]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19407]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19408]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19409]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19410]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19411]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19412]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19413]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19414]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19415]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19416]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19417]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19418]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19419]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19420]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19421]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19422]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A22__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19423]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19424]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19425]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19426]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19427]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19428]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19429]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19430]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19431]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19432]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19433]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19434]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19435]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19436]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19437]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19438]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19439]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19440]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19441]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19442]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19443]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19444]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19445]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19446]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19447]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19448]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19449]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19450]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19451]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19452]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19453]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19454]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A22__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19455]);
        vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A22__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A22__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_22[0U] = vlSelfRef.multiplier__DOT__A22__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_22[1U] = vlSelfRef.multiplier__DOT__A22__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_22[2U] = vlSelfRef.multiplier__DOT__A22__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_22[3U] = vlSelfRef.multiplier__DOT__A22__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19456]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19457]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19458]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19459]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19460]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19461]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19462]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19463]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19464]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19465]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19466]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19467]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19468]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19469]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19470]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19471]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19472]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19473]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19474]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19475]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19476]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19477]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19478]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19479]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19480]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19481]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19482]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19483]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19484]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19485]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19486]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A23__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19487]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19488]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19489]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19490]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19491]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19492]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19493]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19494]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19495]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19496]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19497]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19498]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19499]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19500]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19501]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19502]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19503]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19504]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19505]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19506]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19507]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19508]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19509]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19510]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19511]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19512]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19513]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19514]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19515]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19516]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19517]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19518]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A23__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19519]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19520]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19521]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19522]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19523]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19524]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19525]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19526]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19527]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19528]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19529]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19530]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19531]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19532]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19533]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19534]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19535]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19536]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19537]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19538]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19539]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19540]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19541]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19542]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19543]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19544]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19545]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19546]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19547]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19548]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19549]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19550]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A23__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19551]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19552]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19553]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19554]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19555]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19556]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19557]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19558]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19559]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19560]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19561]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19562]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19563]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19564]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19565]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19566]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19567]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19568]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19569]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19570]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19571]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19572]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19573]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19574]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19575]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19576]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19577]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19578]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19579]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19580]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19581]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19582]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A23__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19583]);
        vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A23__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A23__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_23[0U] = vlSelfRef.multiplier__DOT__A23__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_23[1U] = vlSelfRef.multiplier__DOT__A23__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_23[2U] = vlSelfRef.multiplier__DOT__A23__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_23[3U] = vlSelfRef.multiplier__DOT__A23__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A43__DOT__sum, vlSelfRef.multiplier__DOT__A22__DOT__sum, vlSelfRef.multiplier__DOT__A23__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19584]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19585]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19586]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19587]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19588]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19589]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19590]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19591]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19592]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19593]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19594]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19595]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19596]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19597]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19598]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19599]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19600]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19601]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19602]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19603]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19604]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19605]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19606]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19607]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19608]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19609]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19610]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19611]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19612]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19613]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19614]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A24__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19615]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19616]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19617]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19618]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19619]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19620]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19621]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19622]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19623]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19624]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19625]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19626]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19627]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19628]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19629]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19630]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19631]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19632]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19633]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19634]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19635]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19636]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19637]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19638]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19639]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19640]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19641]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19642]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19643]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19644]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19645]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19646]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A24__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19647]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19648]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19649]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19650]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19651]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19652]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19653]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19654]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19655]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19656]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19657]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19658]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19659]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19660]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19661]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19662]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19663]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19664]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19665]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19666]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19667]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19668]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19669]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19670]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19671]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19672]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19673]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19674]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19675]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19676]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19677]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19678]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A24__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19679]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19680]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19681]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19682]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19683]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19684]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19685]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19686]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19687]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19688]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19689]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19690]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19691]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19692]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19693]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19694]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19695]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19696]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19697]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19698]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19699]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19700]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19701]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19702]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19703]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19704]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19705]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19706]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19707]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19708]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19709]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19710]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A24__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19711]);
        vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A24__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A24__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_24[0U] = vlSelfRef.multiplier__DOT__A24__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_24[1U] = vlSelfRef.multiplier__DOT__A24__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_24[2U] = vlSelfRef.multiplier__DOT__A24__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_24[3U] = vlSelfRef.multiplier__DOT__A24__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19712]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19713]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19714]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19715]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19716]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19717]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19718]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19719]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19720]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19721]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19722]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19723]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19724]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19725]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19726]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19727]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19728]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19729]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19730]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19731]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19732]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19733]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19734]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19735]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19736]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19737]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19738]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19739]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19740]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19741]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19742]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A25__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19743]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19744]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19745]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19746]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19747]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19748]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19749]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19750]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19751]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19752]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19753]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19754]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19755]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19756]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19757]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19758]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19759]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19760]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19761]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19762]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19763]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19764]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19765]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19766]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19767]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19768]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19769]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19770]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19771]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19772]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19773]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19774]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A25__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19775]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19776]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19777]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19778]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19779]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19780]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19781]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19782]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19783]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19784]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19785]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19786]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19787]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19788]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19789]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19790]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19791]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19792]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19793]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19794]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19795]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19796]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19797]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19798]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19799]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19800]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19801]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19802]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19803]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19804]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19805]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19806]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A25__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19807]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19808]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19809]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19810]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19811]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19812]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19813]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19814]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19815]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19816]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19817]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19818]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19819]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19820]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19821]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19822]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19823]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19824]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19825]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19826]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19827]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19828]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19829]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19830]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19831]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19832]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19833]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19834]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19835]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19836]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19837]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19838]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A25__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19839]);
        vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A25__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A25__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_25[0U] = vlSelfRef.multiplier__DOT__A25__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_25[1U] = vlSelfRef.multiplier__DOT__A25__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_25[2U] = vlSelfRef.multiplier__DOT__A25__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_25[3U] = vlSelfRef.multiplier__DOT__A25__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A44__DOT__sum, vlSelfRef.multiplier__DOT__A24__DOT__sum, vlSelfRef.multiplier__DOT__A25__DOT__sum);
    if ((1U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19840]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19841]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19842]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19843]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19844]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19845]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19846]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19847]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19848]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19849]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19850]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19851]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19852]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19853]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19854]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19855]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19856]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19857]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19858]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19859]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19860]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19861]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19862]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19863]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19864]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19865]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19866]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19867]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19868]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19869]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19870]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A26__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19871]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19872]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19873]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19874]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19875]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19876]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19877]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19878]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19879]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19880]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19881]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19882]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19883]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19884]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19885]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19886]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19887]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19888]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19889]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19890]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19891]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19892]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19893]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19894]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19895]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19896]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19897]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19898]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19899]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19900]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19901]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[19902]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A26__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19903]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19904]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19905]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19906]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19907]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19908]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19909]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19910]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19911]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19912]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19913]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19914]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19915]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19916]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19917]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19918]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19919]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19920]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19921]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19922]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19923]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19924]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19925]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19926]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19927]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19928]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19929]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19930]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19931]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19932]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19933]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[19934]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A26__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19935]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19936]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19937]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19938]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19939]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19940]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19941]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19942]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19943]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19944]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19945]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19946]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19947]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19948]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19949]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19950]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19951]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19952]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19953]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19954]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19955]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19956]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19957]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19958]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19959]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19960]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19961]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19962]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19963]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19964]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19965]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[19966]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A26__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19967]);
        vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A26__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A26__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l0_26[0U] = vlSelfRef.multiplier__DOT__A26__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l0_26[1U] = vlSelfRef.multiplier__DOT__A26__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l0_26[2U] = vlSelfRef.multiplier__DOT__A26__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l0_26[3U] = vlSelfRef.multiplier__DOT__A26__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19968]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19969]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19970]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19971]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19972]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19973]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19974]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19975]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19976]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19977]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19978]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19979]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19980]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19981]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19982]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19983]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19984]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19985]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19986]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19987]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19988]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19989]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19990]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19991]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19992]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19993]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19994]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19995]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19996]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19997]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[19998]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A27__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[19999]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20000]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20001]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20002]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20003]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20004]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20005]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20006]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20007]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20008]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20009]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20010]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20011]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20012]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20013]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20014]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20015]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20016]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20017]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20018]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20019]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20020]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20021]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20022]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20023]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20024]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20025]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20026]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20027]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20028]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20029]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[20030]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A27__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20031]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20032]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20033]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20034]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20035]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20036]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20037]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20038]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20039]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20040]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20041]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20042]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20043]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20044]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20045]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20046]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20047]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20048]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20049]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20050]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20051]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20052]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20053]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20054]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20055]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20056]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20057]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20058]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20059]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20060]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20061]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[20062]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A27__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[20063]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A27__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20064]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20065]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20066]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A27__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[20067]);
        vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A27__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A27__DOT__sum[3U]));
    }
}

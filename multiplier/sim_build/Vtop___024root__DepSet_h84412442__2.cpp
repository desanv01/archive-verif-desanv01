// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4058]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4059]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4060]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4061]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp29[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]))) {
        ++(vlSymsp->__Vcoverage[4062]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp29[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4063]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp29[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp29[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4064]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp29[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4065]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp29[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4066]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp29[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4067]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4068]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4069]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4070]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4071]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4072]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4073]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4074]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4075]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4076]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4077]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4078]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4079]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4080]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4081]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4082]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4083]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4084]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4085]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4086]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4087]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4088]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4089]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4090]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4091]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4092]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4093]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp29[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]))) {
        ++(vlSymsp->__Vcoverage[4094]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp29[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4095]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp29[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp29[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A14__DOT__sum, vlSelfRef.multiplier__DOT__pp28, vlSelfRef.multiplier__DOT__pp29);
    vlSelfRef.multiplier__DOT__A15__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp30[0U];
    vlSelfRef.multiplier__DOT__A15__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp30[1U];
    vlSelfRef.multiplier__DOT__A15__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp30[2U];
    vlSelfRef.multiplier__DOT__A15__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp30[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp30[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4096]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp30[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4097]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp30[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4098]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp30[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4099]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4100]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4101]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4102]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4103]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4104]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4105]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4106]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4107]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4108]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4109]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4110]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4111]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4112]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4113]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4114]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4115]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4116]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4117]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4118]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4119]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4120]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4121]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4122]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4123]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4124]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4125]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp30[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]))) {
        ++(vlSymsp->__Vcoverage[4126]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp30[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4127]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp30[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp30[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4128]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp30[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4129]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp30[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4130]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp30[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4131]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4132]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4133]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4134]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4135]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4136]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4137]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4138]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4139]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4140]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4141]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4142]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4143]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4144]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4145]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4146]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4147]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4148]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4149]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4150]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4151]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4152]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4153]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4154]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4155]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4156]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4157]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp30[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]))) {
        ++(vlSymsp->__Vcoverage[4158]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp30[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4159]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp30[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp30[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4160]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp30[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4161]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp30[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4162]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp30[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4163]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4164]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4165]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4166]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4167]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4168]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4169]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4170]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4171]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4172]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp30[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp30[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp30[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp30[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp30[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp30[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp30[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp30[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp30[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp30[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp30[3U]));
    }
    vlSelfRef.multiplier__DOT__A15__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp31[0U];
    vlSelfRef.multiplier__DOT__A15__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp31[1U];
    vlSelfRef.multiplier__DOT__A15__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp31[2U];
    vlSelfRef.multiplier__DOT__A15__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp31[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp31[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp31[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp31[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp31[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4243]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4244]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4247]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4248]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4249]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4250]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4251]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4252]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4253]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp31[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]))) {
        ++(vlSymsp->__Vcoverage[4254]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp31[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4255]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp31[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp31[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp31[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp31[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp31[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp31[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]))) {
        ++(vlSymsp->__Vcoverage[4286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp31[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp31[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp31[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp31[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp31[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp31[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp31[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp31[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp31[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp31[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp31[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp31[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp31[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp31[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]))) {
        ++(vlSymsp->__Vcoverage[4350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp31[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp31[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp31[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A15__DOT__sum, vlSelfRef.multiplier__DOT__pp30, vlSelfRef.multiplier__DOT__pp31);
    vlSelfRef.multiplier__DOT__A16__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp32[0U];
    vlSelfRef.multiplier__DOT__A16__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp32[1U];
    vlSelfRef.multiplier__DOT__A16__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp32[2U];
    vlSelfRef.multiplier__DOT__A16__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp32[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp32[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp32[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp32[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp32[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp32[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]))) {
        ++(vlSymsp->__Vcoverage[4382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp32[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp32[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp32[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp32[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp32[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp32[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp32[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]))) {
        ++(vlSymsp->__Vcoverage[4414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp32[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp32[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp32[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp32[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp32[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp32[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp32[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]))) {
        ++(vlSymsp->__Vcoverage[4446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp32[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp32[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp32[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4448]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp32[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4449]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp32[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4450]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp32[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4451]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4452]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4453]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4454]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4455]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4456]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4457]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4458]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4459]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4460]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4461]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4462]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4463]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4464]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4465]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4466]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4467]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4468]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4469]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4470]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4471]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4472]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4473]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4474]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4475]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4476]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4477]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp32[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]))) {
        ++(vlSymsp->__Vcoverage[4478]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp32[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4479]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp32[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp32[3U]));
    }
    vlSelfRef.multiplier__DOT__A16__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp33[0U];
    vlSelfRef.multiplier__DOT__A16__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp33[1U];
    vlSelfRef.multiplier__DOT__A16__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp33[2U];
    vlSelfRef.multiplier__DOT__A16__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp33[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp33[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4480]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp33[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4481]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp33[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4482]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp33[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4483]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4484]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4485]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4486]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4487]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4488]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4489]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4490]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4491]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4492]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4493]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4494]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4495]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4496]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4497]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4498]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4499]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4500]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4501]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4502]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4503]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4504]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4505]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4506]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4507]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4508]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4509]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp33[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]))) {
        ++(vlSymsp->__Vcoverage[4510]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp33[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4511]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp33[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp33[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4512]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp33[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4513]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp33[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4514]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp33[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4515]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4516]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4517]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4518]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4519]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4520]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4521]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4522]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4523]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4524]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4525]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4526]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4527]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4528]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4529]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4530]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4531]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4532]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4533]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4534]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4535]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4536]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4537]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4538]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4539]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4540]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4541]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp33[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]))) {
        ++(vlSymsp->__Vcoverage[4542]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp33[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4543]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp33[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp33[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4544]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp33[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4545]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp33[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4546]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp33[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4547]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4548]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4549]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4550]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4551]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4552]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4553]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4554]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4555]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4556]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4557]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4558]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4559]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4560]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4561]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4562]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4563]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4564]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4565]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4566]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4567]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4568]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4569]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4570]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4571]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4572]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4573]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp33[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]))) {
        ++(vlSymsp->__Vcoverage[4574]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp33[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4575]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp33[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp33[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4576]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp33[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4577]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp33[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4578]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp33[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4579]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4580]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4581]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4582]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4583]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4584]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4585]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4586]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4587]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4588]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4589]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4590]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4591]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4592]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4593]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4594]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4595]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4596]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4597]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4598]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4599]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4600]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4601]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4602]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4603]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4604]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4605]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp33[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]))) {
        ++(vlSymsp->__Vcoverage[4606]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp33[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4607]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp33[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp33[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A16__DOT__sum, vlSelfRef.multiplier__DOT__pp32, vlSelfRef.multiplier__DOT__pp33);
    vlSelfRef.multiplier__DOT__A17__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp34[0U];
    vlSelfRef.multiplier__DOT__A17__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp34[1U];
    vlSelfRef.multiplier__DOT__A17__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp34[2U];
    vlSelfRef.multiplier__DOT__A17__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp34[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp34[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4608]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp34[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4609]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp34[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4610]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp34[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4611]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4612]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4613]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4614]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4615]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4616]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4617]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4618]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4619]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4620]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4621]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4622]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4623]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4624]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4625]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4626]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4627]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4628]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4629]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4630]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4631]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4632]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4633]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4634]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4635]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4636]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4637]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp34[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]))) {
        ++(vlSymsp->__Vcoverage[4638]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp34[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4639]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp34[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp34[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4640]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp34[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4641]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp34[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4642]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp34[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4643]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4644]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4645]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4646]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4647]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4648]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4649]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4650]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4651]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4652]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4653]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4654]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4655]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4656]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4657]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4658]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4659]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4660]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4661]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4662]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4663]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4664]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4665]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4666]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4667]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4668]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4669]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp34[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]))) {
        ++(vlSymsp->__Vcoverage[4670]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp34[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4671]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp34[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp34[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4672]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp34[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4673]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp34[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4674]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp34[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4675]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4676]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4677]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4678]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4679]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4680]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4681]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4682]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4683]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4684]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4685]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4686]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4687]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4688]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4689]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4691]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4701]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp34[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]))) {
        ++(vlSymsp->__Vcoverage[4702]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp34[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp34[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp34[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4704]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp34[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4705]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp34[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4706]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp34[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4707]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4708]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4709]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4710]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4711]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4712]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4713]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4714]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4715]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4716]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4717]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4718]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4719]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4720]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp34[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp34[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp34[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp34[3U]));
    }
    vlSelfRef.multiplier__DOT__A17__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp35[0U];
    vlSelfRef.multiplier__DOT__A17__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp35[1U];
    vlSelfRef.multiplier__DOT__A17__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp35[2U];
    vlSelfRef.multiplier__DOT__A17__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp35[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp35[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp35[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4737]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp35[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4738]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp35[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4739]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4740]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4741]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4757]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4758]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4759]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4760]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4761]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4762]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4763]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4764]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4765]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp35[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]))) {
        ++(vlSymsp->__Vcoverage[4766]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp35[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4767]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp35[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp35[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4768]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp35[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4769]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp35[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4770]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp35[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4771]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4772]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4773]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4774]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4775]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4776]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4777]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4778]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4779]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4780]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4781]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4782]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4783]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4784]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4785]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4786]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4787]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4788]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4789]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4790]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4791]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4792]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4793]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4794]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4795]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4796]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4797]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp35[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]))) {
        ++(vlSymsp->__Vcoverage[4798]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp35[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4799]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp35[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp35[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4800]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp35[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4801]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp35[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4802]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp35[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4803]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4804]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4805]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4806]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4807]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4808]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4809]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4810]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4811]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4812]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4813]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4814]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4815]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4816]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4817]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4818]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4819]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4820]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4821]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4822]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4823]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4824]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4825]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4826]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4827]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4828]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4829]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp35[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]))) {
        ++(vlSymsp->__Vcoverage[4830]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp35[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4831]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp35[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp35[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4832]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp35[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4833]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp35[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4834]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp35[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4835]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4836]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4837]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4838]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4839]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4840]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4841]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4842]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4843]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4844]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4845]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4846]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4847]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4848]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4849]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4850]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4851]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4852]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4853]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4854]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4855]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4856]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4857]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4858]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4859]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4860]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4861]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp35[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]))) {
        ++(vlSymsp->__Vcoverage[4862]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp35[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4863]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp35[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp35[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A17__DOT__sum, vlSelfRef.multiplier__DOT__pp34, vlSelfRef.multiplier__DOT__pp35);
    vlSelfRef.multiplier__DOT__A18__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp36[0U];
    vlSelfRef.multiplier__DOT__A18__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp36[1U];
    vlSelfRef.multiplier__DOT__A18__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp36[2U];
    vlSelfRef.multiplier__DOT__A18__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp36[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp36[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4864]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp36[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4865]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp36[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4866]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp36[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4867]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4868]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4869]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp36[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp36[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp36[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp36[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp36[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp36[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp36[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4919]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4920]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4921]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4922]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4923]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4924]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp36[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]))) {
        ++(vlSymsp->__Vcoverage[4926]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp36[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4927]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp36[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp36[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4928]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp36[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4929]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp36[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4930]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp36[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4931]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4932]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4933]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4934]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4935]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4936]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4937]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4938]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4939]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4940]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4941]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4942]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4943]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4944]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4945]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4946]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4947]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4948]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4949]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4950]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4951]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4952]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4953]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4954]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4955]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4956]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4957]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp36[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]))) {
        ++(vlSymsp->__Vcoverage[4958]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp36[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4959]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp36[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp36[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4960]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp36[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4961]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp36[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4962]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp36[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4963]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4964]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4965]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4966]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4967]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4968]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4969]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4970]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4971]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4972]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4973]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4974]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4975]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4976]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4977]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4978]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4979]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4980]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4981]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4982]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4983]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4984]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4985]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4986]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4987]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4988]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4989]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp36[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]))) {
        ++(vlSymsp->__Vcoverage[4990]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp36[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4991]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp36[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp36[3U]));
    }
    vlSelfRef.multiplier__DOT__A18__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp37[0U];
    vlSelfRef.multiplier__DOT__A18__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp37[1U];
    vlSelfRef.multiplier__DOT__A18__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp37[2U];
    vlSelfRef.multiplier__DOT__A18__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp37[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp37[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[4992]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp37[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[4993]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp37[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[4994]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp37[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[4995]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[4996]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[4997]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[4998]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[4999]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5000]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5001]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5002]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5003]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5004]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5005]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5006]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5007]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5008]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5009]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5010]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5011]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5012]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5013]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5014]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5015]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5016]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5017]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5018]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5019]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5020]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5021]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp37[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]))) {
        ++(vlSymsp->__Vcoverage[5022]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp37[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp37[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp37[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp37[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp37[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp37[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5031]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5032]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5033]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5034]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5035]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5036]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5037]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5038]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5039]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5040]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5041]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5042]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5043]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5044]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5045]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5046]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5047]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5048]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5049]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5050]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5051]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5052]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5053]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp37[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]))) {
        ++(vlSymsp->__Vcoverage[5054]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp37[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5055]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp37[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp37[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5056]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp37[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5057]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp37[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5058]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp37[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5059]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5060]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5061]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5062]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5063]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5064]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5065]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5066]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5067]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5068]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5069]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5070]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5071]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5072]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5073]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5074]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5075]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5076]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5077]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5078]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5079]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5080]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5081]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5082]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5083]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5084]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5085]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp37[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]))) {
        ++(vlSymsp->__Vcoverage[5086]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp37[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5087]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp37[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp37[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5088]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp37[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5089]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp37[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5090]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp37[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5091]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5092]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5093]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5094]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5095]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5096]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5097]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5098]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5099]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5100]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5101]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5102]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5103]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5104]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5105]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5106]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5107]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5108]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5109]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5110]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5111]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5112]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5113]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5114]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5115]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5116]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5117]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp37[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]))) {
        ++(vlSymsp->__Vcoverage[5118]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp37[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5119]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp37[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp37[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A18__DOT__sum, vlSelfRef.multiplier__DOT__pp36, vlSelfRef.multiplier__DOT__pp37);
    vlSelfRef.multiplier__DOT__A19__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp38[0U];
    vlSelfRef.multiplier__DOT__A19__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp38[1U];
    vlSelfRef.multiplier__DOT__A19__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp38[2U];
    vlSelfRef.multiplier__DOT__A19__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp38[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp38[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5120]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp38[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5121]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp38[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5122]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp38[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5123]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5124]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5125]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5126]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5127]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5128]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5129]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5130]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5131]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5132]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5133]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5134]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5135]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5136]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5137]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5138]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5139]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5140]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5141]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5142]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5143]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5144]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5145]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5146]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5147]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5148]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5149]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp38[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]))) {
        ++(vlSymsp->__Vcoverage[5150]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp38[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5151]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp38[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp38[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5152]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp38[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5153]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp38[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5154]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp38[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5155]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5156]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5157]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5158]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5159]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5160]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5161]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5162]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5163]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5164]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5165]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5166]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5167]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5168]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5169]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5170]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5171]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5172]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5173]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5174]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5175]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5176]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5177]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5178]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5179]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5180]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5181]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp38[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]))) {
        ++(vlSymsp->__Vcoverage[5182]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp38[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5183]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp38[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp38[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5184]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp38[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5185]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp38[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5186]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp38[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5187]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5188]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5189]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5190]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5191]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5192]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5193]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5194]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5195]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5196]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5197]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5198]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5199]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5200]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5201]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5202]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5203]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5204]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5205]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5206]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5207]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5208]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5209]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5210]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5211]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5212]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5213]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp38[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]))) {
        ++(vlSymsp->__Vcoverage[5214]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp38[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5215]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp38[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp38[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5216]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp38[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5217]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp38[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5218]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp38[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5219]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5220]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5221]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5222]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5223]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5224]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5225]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5226]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5227]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5228]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5229]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5230]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5231]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5232]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5233]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5234]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5235]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5236]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5237]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5238]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5239]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5240]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5241]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5242]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5243]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5244]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5245]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp38[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]))) {
        ++(vlSymsp->__Vcoverage[5246]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp38[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5247]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp38[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp38[3U]));
    }
    vlSelfRef.multiplier__DOT__A19__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp39[0U];
    vlSelfRef.multiplier__DOT__A19__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp39[1U];
    vlSelfRef.multiplier__DOT__A19__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp39[2U];
    vlSelfRef.multiplier__DOT__A19__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp39[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp39[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5248]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp39[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5249]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp39[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5250]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp39[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5251]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5252]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5253]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5254]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5255]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp39[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]))) {
        ++(vlSymsp->__Vcoverage[5278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp39[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp39[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp39[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp39[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp39[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp39[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp39[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]))) {
        ++(vlSymsp->__Vcoverage[5310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp39[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp39[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp39[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp39[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp39[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp39[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp39[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]))) {
        ++(vlSymsp->__Vcoverage[5342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp39[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp39[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp39[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp39[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp39[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp39[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp39[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]))) {
        ++(vlSymsp->__Vcoverage[5374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp39[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp39[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp39[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A19__DOT__sum, vlSelfRef.multiplier__DOT__pp38, vlSelfRef.multiplier__DOT__pp39);
    vlSelfRef.multiplier__DOT__A20__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp40[0U];
    vlSelfRef.multiplier__DOT__A20__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp40[1U];
    vlSelfRef.multiplier__DOT__A20__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp40[2U];
    vlSelfRef.multiplier__DOT__A20__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp40[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp40[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp40[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp40[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp40[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp40[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]))) {
        ++(vlSymsp->__Vcoverage[5406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp40[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp40[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp40[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp40[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp40[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp40[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp40[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]))) {
        ++(vlSymsp->__Vcoverage[5438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp40[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp40[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp40[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp40[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp40[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp40[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5448]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5449]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5450]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5451]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5452]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5453]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5454]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5455]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5456]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5457]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5458]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5459]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5460]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5461]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5462]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5463]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5464]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5465]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5466]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5467]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5468]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5469]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp40[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]))) {
        ++(vlSymsp->__Vcoverage[5470]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp40[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5471]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp40[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp40[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5472]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp40[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5473]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp40[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5474]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp40[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5475]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5476]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5477]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5478]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5479]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5480]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5481]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5482]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5483]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5484]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5485]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5486]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5487]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5488]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5489]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5490]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5491]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5492]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5493]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5494]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5495]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5496]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5497]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5498]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5499]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5500]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5501]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp40[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]))) {
        ++(vlSymsp->__Vcoverage[5502]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp40[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5503]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp40[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp40[3U]));
    }
    vlSelfRef.multiplier__DOT__A20__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp41[0U];
    vlSelfRef.multiplier__DOT__A20__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp41[1U];
    vlSelfRef.multiplier__DOT__A20__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp41[2U];
    vlSelfRef.multiplier__DOT__A20__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp41[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp41[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5504]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp41[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5505]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp41[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5506]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp41[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5507]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5508]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5509]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5510]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5511]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5512]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5513]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5514]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5515]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5516]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5517]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5518]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5519]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5520]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5521]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5522]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5523]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5524]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5525]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5526]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5527]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5528]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5529]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5530]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5531]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5532]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5533]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp41[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]))) {
        ++(vlSymsp->__Vcoverage[5534]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp41[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5535]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp41[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp41[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5536]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp41[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5537]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp41[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5538]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp41[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5539]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5540]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5541]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5542]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5543]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5544]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5545]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5546]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5547]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5548]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5549]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5550]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5551]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5552]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5553]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5554]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5555]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5556]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5557]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5558]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5559]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5560]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5561]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5562]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5563]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5564]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5565]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp41[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]))) {
        ++(vlSymsp->__Vcoverage[5566]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp41[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5567]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp41[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp41[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5568]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp41[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5569]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp41[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5570]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp41[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5571]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5572]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5573]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5574]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5575]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5576]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5577]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5578]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5579]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5580]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5581]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5582]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5583]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5584]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5585]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5586]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5587]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5588]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5589]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5590]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5591]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5592]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5593]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5594]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5595]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5596]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5597]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp41[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]))) {
        ++(vlSymsp->__Vcoverage[5598]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp41[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5599]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp41[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp41[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5600]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp41[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5601]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp41[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5602]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp41[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5603]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5604]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5605]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5606]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5607]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5608]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5609]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5610]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5611]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5612]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5613]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5614]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5615]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5616]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5617]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5618]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5619]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5620]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5621]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5622]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5623]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5624]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5625]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5626]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5627]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5628]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5629]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp41[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]))) {
        ++(vlSymsp->__Vcoverage[5630]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp41[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5631]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp41[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp41[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A20__DOT__sum, vlSelfRef.multiplier__DOT__pp40, vlSelfRef.multiplier__DOT__pp41);
    vlSelfRef.multiplier__DOT__A21__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp42[0U];
    vlSelfRef.multiplier__DOT__A21__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp42[1U];
    vlSelfRef.multiplier__DOT__A21__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp42[2U];
    vlSelfRef.multiplier__DOT__A21__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp42[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp42[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5632]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp42[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5633]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp42[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5634]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp42[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5635]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5636]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5637]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5638]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5639]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5640]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5641]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5642]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5643]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5644]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5645]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5646]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5647]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5648]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5649]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5650]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5651]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5652]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5653]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5654]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5655]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5656]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5657]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5658]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5659]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5660]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5661]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp42[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]))) {
        ++(vlSymsp->__Vcoverage[5662]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp42[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5663]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp42[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp42[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5664]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp42[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5665]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp42[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5666]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp42[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5667]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5668]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5669]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5670]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5671]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5672]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5673]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5674]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5675]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5676]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5677]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5678]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5679]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5680]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5681]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5682]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5683]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5684]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5685]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5686]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5687]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5688]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5689]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5690]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5691]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5692]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5693]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp42[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]))) {
        ++(vlSymsp->__Vcoverage[5694]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp42[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5695]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp42[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp42[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5696]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp42[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5697]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp42[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5698]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp42[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5699]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5700]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5701]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5702]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5703]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5704]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5705]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5706]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5707]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5708]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5709]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5710]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5711]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5712]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5713]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5714]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5715]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5716]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5717]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5718]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5719]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5720]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5721]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5722]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5723]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5724]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5725]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp42[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]))) {
        ++(vlSymsp->__Vcoverage[5726]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp42[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5727]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp42[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp42[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5728]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp42[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5729]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp42[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5730]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp42[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5731]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5732]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5733]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5734]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5735]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5736]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5737]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5738]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5739]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5740]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5741]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5742]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5743]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5744]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5745]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5746]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5747]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5748]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5749]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5750]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5751]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5752]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5753]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5754]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5755]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5756]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5757]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp42[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]))) {
        ++(vlSymsp->__Vcoverage[5758]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp42[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5759]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp42[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp42[3U]));
    }
    vlSelfRef.multiplier__DOT__A21__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp43[0U];
    vlSelfRef.multiplier__DOT__A21__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp43[1U];
    vlSelfRef.multiplier__DOT__A21__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp43[2U];
    vlSelfRef.multiplier__DOT__A21__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp43[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp43[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5760]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp43[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5761]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp43[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5762]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp43[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5763]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5764]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5765]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5766]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5767]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5768]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5769]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5770]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5771]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5772]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5773]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5774]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5775]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5776]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5777]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5778]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5779]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5780]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5781]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5782]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5783]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5784]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5785]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5786]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5787]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5788]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5789]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp43[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]))) {
        ++(vlSymsp->__Vcoverage[5790]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp43[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5791]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp43[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp43[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5792]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp43[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5793]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp43[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5794]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp43[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5795]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5796]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5797]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5798]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5799]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5800]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5801]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5802]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5803]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5804]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5805]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5806]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5807]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5808]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5809]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5810]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5811]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5812]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5813]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5814]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5815]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5816]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5817]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5818]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5819]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5820]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5821]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp43[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]))) {
        ++(vlSymsp->__Vcoverage[5822]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp43[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5823]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp43[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp43[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5824]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp43[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5825]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp43[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5826]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp43[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5827]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5828]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5829]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5830]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5831]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5832]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5833]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5834]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5835]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5836]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5837]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5838]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5839]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5840]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5841]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5842]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5843]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5844]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5845]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5846]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5847]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5848]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5849]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5850]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5851]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5852]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5853]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp43[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]))) {
        ++(vlSymsp->__Vcoverage[5854]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp43[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5855]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp43[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp43[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5856]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp43[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5857]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp43[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5858]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp43[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5859]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5860]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5861]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5862]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5863]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5864]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5865]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5866]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5867]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5868]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5869]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5870]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5871]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5872]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5873]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5874]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5875]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5876]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5877]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5878]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5879]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5880]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5881]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5882]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5883]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5884]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5885]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp43[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]))) {
        ++(vlSymsp->__Vcoverage[5886]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp43[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5887]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp43[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp43[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A21__DOT__sum, vlSelfRef.multiplier__DOT__pp42, vlSelfRef.multiplier__DOT__pp43);
    vlSelfRef.multiplier__DOT__A22__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp44[0U];
    vlSelfRef.multiplier__DOT__A22__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp44[1U];
    vlSelfRef.multiplier__DOT__A22__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp44[2U];
    vlSelfRef.multiplier__DOT__A22__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp44[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp44[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5888]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp44[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5889]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp44[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5890]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp44[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5891]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5892]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5893]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5894]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5895]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5896]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5897]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5898]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5899]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5900]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5901]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5902]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5903]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5904]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5905]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5906]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5907]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5908]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5909]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5910]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5911]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5912]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5913]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5914]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5915]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5916]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5917]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp44[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]))) {
        ++(vlSymsp->__Vcoverage[5918]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp44[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5919]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp44[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp44[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5920]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp44[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5921]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp44[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5922]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp44[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5923]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5924]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5925]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5926]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5927]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5928]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5929]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5930]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5931]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5932]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5933]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5934]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5935]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5936]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5937]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5938]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5939]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5940]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5941]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5942]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5943]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5944]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5945]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5946]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5947]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5948]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5949]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp44[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]))) {
        ++(vlSymsp->__Vcoverage[5950]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp44[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5951]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp44[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp44[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5952]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp44[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5953]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp44[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5954]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp44[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5955]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5956]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5957]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5958]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5959]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5960]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5961]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5962]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5963]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5964]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5965]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5966]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5967]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5968]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5969]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5970]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5971]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5972]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5973]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5974]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5975]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5976]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5977]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5978]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5979]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5980]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5981]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp44[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]))) {
        ++(vlSymsp->__Vcoverage[5982]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp44[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5983]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp44[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp44[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5984]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp44[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5985]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp44[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5986]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp44[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5987]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5988]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5989]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5990]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5991]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5992]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5993]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5994]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5995]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5996]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5997]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5998]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[5999]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6000]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6001]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6002]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6003]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6004]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6005]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6006]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6007]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6008]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6009]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6010]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6011]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6012]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6013]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp44[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]))) {
        ++(vlSymsp->__Vcoverage[6014]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp44[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6015]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp44[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp44[3U]));
    }
    vlSelfRef.multiplier__DOT__A22__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp45[0U];
    vlSelfRef.multiplier__DOT__A22__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp45[1U];
    vlSelfRef.multiplier__DOT__A22__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp45[2U];
    vlSelfRef.multiplier__DOT__A22__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp45[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp45[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6016]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp45[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6017]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp45[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6018]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp45[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6019]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6020]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6021]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6022]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6023]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6024]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6025]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6026]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6027]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
}

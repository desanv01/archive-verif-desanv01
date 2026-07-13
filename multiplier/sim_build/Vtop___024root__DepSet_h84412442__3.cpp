// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6028]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6029]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6030]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6031]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6032]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6033]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6034]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6035]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6036]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6037]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6038]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6039]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6040]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6041]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6042]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6043]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6044]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6045]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp45[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]))) {
        ++(vlSymsp->__Vcoverage[6046]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp45[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6047]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp45[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp45[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6048]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp45[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6049]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp45[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6050]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp45[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6051]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6052]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6053]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6054]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6055]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6056]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6057]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6058]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6059]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6060]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6061]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6062]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6063]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6064]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6065]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6066]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6067]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6068]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6069]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6070]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6071]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6072]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6073]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6074]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6075]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6076]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6077]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp45[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]))) {
        ++(vlSymsp->__Vcoverage[6078]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp45[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6079]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp45[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp45[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6080]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp45[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6081]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp45[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6082]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp45[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6083]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6084]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6085]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6086]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6087]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6088]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6089]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6090]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6091]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6092]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6093]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6094]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6095]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6096]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6097]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6098]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6099]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6103]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6104]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6105]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6106]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6107]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6108]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6109]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp45[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]))) {
        ++(vlSymsp->__Vcoverage[6110]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp45[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6111]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp45[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp45[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6112]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp45[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6113]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp45[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6114]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp45[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6115]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6116]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6117]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6118]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6119]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6120]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6121]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6122]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6123]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6124]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6125]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6126]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6127]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6128]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6129]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6130]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6131]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6132]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6133]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6134]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6135]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6136]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6137]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6138]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6139]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6140]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6141]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp45[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]))) {
        ++(vlSymsp->__Vcoverage[6142]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp45[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp45[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp45[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A22__DOT__sum, vlSelfRef.multiplier__DOT__pp44, vlSelfRef.multiplier__DOT__pp45);
    vlSelfRef.multiplier__DOT__A23__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp46[0U];
    vlSelfRef.multiplier__DOT__A23__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp46[1U];
    vlSelfRef.multiplier__DOT__A23__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp46[2U];
    vlSelfRef.multiplier__DOT__A23__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp46[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp46[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6144]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp46[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6145]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp46[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6146]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp46[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6147]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6148]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6149]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6150]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6151]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6152]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6153]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6154]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6155]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6156]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6157]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6158]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6159]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6160]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6161]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6162]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6163]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6164]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6165]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6166]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6167]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6168]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6169]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6170]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6171]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6172]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6173]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp46[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]))) {
        ++(vlSymsp->__Vcoverage[6174]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp46[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6175]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp46[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp46[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6176]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp46[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6177]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp46[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6178]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp46[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6179]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6180]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6181]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6182]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6183]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6184]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6185]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6186]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6187]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6188]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6189]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6190]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6191]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6192]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6193]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6194]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6195]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6196]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6197]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6198]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6199]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6200]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6201]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6202]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6203]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6204]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6205]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp46[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]))) {
        ++(vlSymsp->__Vcoverage[6206]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp46[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6207]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp46[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp46[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6208]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp46[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6209]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp46[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6210]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp46[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6211]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6212]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6213]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6214]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6215]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6216]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6217]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6218]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6219]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6220]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6221]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6222]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6223]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6224]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6225]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6226]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6227]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6228]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6229]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6230]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6231]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6232]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6233]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6234]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6235]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6236]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6237]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp46[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]))) {
        ++(vlSymsp->__Vcoverage[6238]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp46[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6239]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp46[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp46[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6240]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp46[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6241]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp46[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6242]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp46[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6243]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6244]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6245]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6246]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6247]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6248]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6249]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6250]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6251]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6252]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6253]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6254]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6255]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp46[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]))) {
        ++(vlSymsp->__Vcoverage[6270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp46[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp46[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp46[3U]));
    }
    vlSelfRef.multiplier__DOT__A23__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp47[0U];
    vlSelfRef.multiplier__DOT__A23__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp47[1U];
    vlSelfRef.multiplier__DOT__A23__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp47[2U];
    vlSelfRef.multiplier__DOT__A23__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp47[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp47[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp47[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp47[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp47[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp47[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]))) {
        ++(vlSymsp->__Vcoverage[6302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp47[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp47[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp47[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp47[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp47[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp47[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp47[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]))) {
        ++(vlSymsp->__Vcoverage[6334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp47[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp47[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp47[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp47[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp47[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp47[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp47[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]))) {
        ++(vlSymsp->__Vcoverage[6366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp47[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp47[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp47[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp47[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp47[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp47[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp47[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]))) {
        ++(vlSymsp->__Vcoverage[6398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp47[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp47[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp47[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A23__DOT__sum, vlSelfRef.multiplier__DOT__pp46, vlSelfRef.multiplier__DOT__pp47);
    vlSelfRef.multiplier__DOT__A24__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp48[0U];
    vlSelfRef.multiplier__DOT__A24__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp48[1U];
    vlSelfRef.multiplier__DOT__A24__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp48[2U];
    vlSelfRef.multiplier__DOT__A24__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp48[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp48[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp48[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp48[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp48[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp48[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]))) {
        ++(vlSymsp->__Vcoverage[6430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp48[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp48[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp48[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp48[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp48[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp48[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6448]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6449]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6450]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6451]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6452]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6453]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6454]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6455]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6456]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6457]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6458]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6459]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6460]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6461]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp48[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]))) {
        ++(vlSymsp->__Vcoverage[6462]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp48[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6463]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp48[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp48[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6464]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp48[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6465]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp48[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6466]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp48[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6467]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6468]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6469]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6470]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6471]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6472]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6473]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6474]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6475]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6476]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6477]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6478]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6479]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6480]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6481]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6482]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6483]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6484]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6485]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6486]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6487]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6488]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6489]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6490]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6491]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6492]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6493]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp48[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]))) {
        ++(vlSymsp->__Vcoverage[6494]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp48[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6495]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp48[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp48[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6496]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp48[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6497]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp48[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6498]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp48[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6499]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6500]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6501]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6502]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6503]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6504]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6505]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6506]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6507]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6508]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6509]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6510]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6511]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6512]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6513]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6514]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6515]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6516]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6517]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6518]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6519]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6520]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6521]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6522]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6523]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6524]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6525]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp48[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]))) {
        ++(vlSymsp->__Vcoverage[6526]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp48[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6527]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp48[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp48[3U]));
    }
    vlSelfRef.multiplier__DOT__A24__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp49[0U];
    vlSelfRef.multiplier__DOT__A24__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp49[1U];
    vlSelfRef.multiplier__DOT__A24__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp49[2U];
    vlSelfRef.multiplier__DOT__A24__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp49[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp49[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6528]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp49[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6529]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp49[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6530]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp49[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6531]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6532]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6533]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6534]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6535]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6536]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6537]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6538]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6539]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6540]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6541]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6542]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6543]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6544]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6545]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6546]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6547]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6548]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6549]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6550]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6551]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6552]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6553]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6554]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6555]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6556]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6557]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp49[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]))) {
        ++(vlSymsp->__Vcoverage[6558]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp49[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6559]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp49[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp49[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6560]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp49[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6561]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp49[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6562]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp49[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6563]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6564]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6565]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6566]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6567]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6568]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6569]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6570]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6571]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6572]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6573]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6574]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6575]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6576]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6577]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6578]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6579]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6580]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6581]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6582]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6583]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6584]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6585]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6586]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6587]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6588]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6589]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp49[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]))) {
        ++(vlSymsp->__Vcoverage[6590]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp49[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6591]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp49[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp49[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6592]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp49[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6593]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp49[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6594]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp49[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6595]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6596]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6597]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6598]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6599]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6600]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6601]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6602]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6603]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6604]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6605]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6606]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6607]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6608]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6609]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6610]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6611]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6612]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6613]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6614]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6615]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6616]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6617]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6618]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6619]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6620]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6621]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp49[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]))) {
        ++(vlSymsp->__Vcoverage[6622]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp49[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6623]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp49[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp49[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6624]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp49[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6625]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp49[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6626]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp49[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6627]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6628]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6629]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6630]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6631]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6632]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6633]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6634]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6635]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6636]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6637]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6638]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6639]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6640]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6641]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6642]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6643]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6644]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6645]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6646]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6647]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6648]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6649]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6650]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6651]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6652]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6653]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp49[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]))) {
        ++(vlSymsp->__Vcoverage[6654]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp49[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6655]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp49[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp49[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A24__DOT__sum, vlSelfRef.multiplier__DOT__pp48, vlSelfRef.multiplier__DOT__pp49);
    vlSelfRef.multiplier__DOT__A25__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp50[0U];
    vlSelfRef.multiplier__DOT__A25__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp50[1U];
    vlSelfRef.multiplier__DOT__A25__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp50[2U];
    vlSelfRef.multiplier__DOT__A25__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp50[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp50[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6656]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp50[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6657]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp50[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6658]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp50[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6659]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6660]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6661]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6662]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6663]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6664]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6665]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6666]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6667]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6668]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6669]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6670]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6671]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6672]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6673]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6674]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6675]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6676]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6677]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6678]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6679]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6680]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6681]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6682]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6683]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6684]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6685]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp50[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]))) {
        ++(vlSymsp->__Vcoverage[6686]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp50[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6687]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp50[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp50[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6688]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp50[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6689]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp50[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6690]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp50[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6691]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6692]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6693]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6694]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6695]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6696]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6697]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6698]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6699]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6700]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6701]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6702]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6703]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6704]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6705]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6706]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6707]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6708]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6709]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6710]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6711]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6712]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6713]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6714]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6715]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6716]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6717]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp50[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]))) {
        ++(vlSymsp->__Vcoverage[6718]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp50[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6719]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp50[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp50[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6720]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp50[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6721]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp50[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6722]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp50[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6723]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6724]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6725]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6726]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6727]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6728]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6729]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6730]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6731]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6732]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6733]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6734]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6735]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6736]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6737]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6738]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6739]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6740]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6741]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6742]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6743]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6744]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6745]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6746]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6747]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6748]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6749]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp50[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]))) {
        ++(vlSymsp->__Vcoverage[6750]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp50[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6751]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp50[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp50[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6752]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp50[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6753]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp50[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6754]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp50[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6755]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6756]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6757]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6758]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6759]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6760]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6761]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6762]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6763]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6764]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6765]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6766]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6767]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6768]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6769]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6770]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6771]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6772]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6773]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6774]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6775]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6776]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6777]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6778]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6779]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6780]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6781]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp50[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]))) {
        ++(vlSymsp->__Vcoverage[6782]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp50[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6783]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp50[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp50[3U]));
    }
    vlSelfRef.multiplier__DOT__A25__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp51[0U];
    vlSelfRef.multiplier__DOT__A25__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp51[1U];
    vlSelfRef.multiplier__DOT__A25__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp51[2U];
    vlSelfRef.multiplier__DOT__A25__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp51[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp51[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6784]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp51[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6785]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp51[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6786]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp51[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6787]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6788]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6789]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6790]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6791]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6792]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6793]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6794]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6795]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6796]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6797]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6798]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6799]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6800]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6801]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6802]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6803]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6804]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6805]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6806]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6807]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6808]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6809]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6810]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6811]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6812]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6813]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp51[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]))) {
        ++(vlSymsp->__Vcoverage[6814]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp51[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6815]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp51[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp51[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6816]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp51[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6817]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp51[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6818]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp51[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6819]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6820]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6821]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6822]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6823]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6824]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6825]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6826]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6827]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6828]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6829]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6830]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6831]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6832]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6833]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6834]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6835]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6836]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6837]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6838]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6839]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6840]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6841]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6842]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6843]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6844]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6845]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp51[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]))) {
        ++(vlSymsp->__Vcoverage[6846]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp51[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6847]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp51[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp51[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6848]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp51[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6849]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp51[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6850]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp51[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6851]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6852]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6853]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6854]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6855]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6856]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6857]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6858]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6859]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6860]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6861]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6862]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6863]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6864]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6865]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6866]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6867]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6868]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6869]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6870]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6871]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6872]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6873]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6874]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6875]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6876]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6877]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp51[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]))) {
        ++(vlSymsp->__Vcoverage[6878]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp51[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6879]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp51[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp51[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6880]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp51[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6881]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp51[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6882]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp51[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6883]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6884]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6885]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6886]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6887]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6888]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6889]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6890]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6891]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6892]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6893]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6894]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6895]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6896]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6897]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6898]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6899]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6900]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6901]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6902]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6903]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6904]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6905]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6906]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6907]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6908]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6909]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp51[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]))) {
        ++(vlSymsp->__Vcoverage[6910]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp51[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6911]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp51[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp51[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A25__DOT__sum, vlSelfRef.multiplier__DOT__pp50, vlSelfRef.multiplier__DOT__pp51);
    vlSelfRef.multiplier__DOT__A26__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp52[0U];
    vlSelfRef.multiplier__DOT__A26__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp52[1U];
    vlSelfRef.multiplier__DOT__A26__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp52[2U];
    vlSelfRef.multiplier__DOT__A26__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp52[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp52[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6912]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp52[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6913]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp52[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6914]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp52[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6915]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6916]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6917]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6918]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6919]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6920]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6921]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6922]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6923]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6924]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6925]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6926]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6927]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6928]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6929]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6930]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6931]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6932]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6933]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6934]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6935]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6936]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6937]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6938]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6939]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6940]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6941]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp52[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]))) {
        ++(vlSymsp->__Vcoverage[6942]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp52[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6943]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp52[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp52[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6944]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp52[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6945]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp52[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6946]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp52[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6947]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6948]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6949]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6950]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6951]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6952]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6953]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6954]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6955]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6956]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6957]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6958]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6959]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6960]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6961]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6962]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6963]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6964]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6965]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6966]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6967]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6968]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6969]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6970]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6971]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6972]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6973]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp52[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]))) {
        ++(vlSymsp->__Vcoverage[6974]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp52[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6975]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp52[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp52[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6976]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp52[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6977]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp52[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6978]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp52[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6979]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6980]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6981]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6982]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6983]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6984]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6985]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6986]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6987]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6988]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6989]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6990]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6991]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6992]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6993]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6994]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6995]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6996]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6997]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6998]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[6999]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[7000]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[7001]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[7002]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[7003]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[7004]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[7005]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp52[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]))) {
        ++(vlSymsp->__Vcoverage[7006]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp52[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7007]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp52[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp52[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7008]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp52[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7009]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp52[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7010]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp52[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7011]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7012]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7013]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7014]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7015]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7016]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7017]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7018]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7019]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7020]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7021]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7022]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7023]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7024]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7025]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7026]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7027]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7028]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7029]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7030]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7031]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7032]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7033]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7034]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7035]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7036]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7037]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp52[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]))) {
        ++(vlSymsp->__Vcoverage[7038]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp52[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7039]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp52[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp52[3U]));
    }
    vlSelfRef.multiplier__DOT__A26__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp53[0U];
    vlSelfRef.multiplier__DOT__A26__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp53[1U];
    vlSelfRef.multiplier__DOT__A26__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp53[2U];
    vlSelfRef.multiplier__DOT__A26__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp53[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp53[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7040]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp53[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7041]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp53[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7042]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp53[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7043]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7044]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7045]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7046]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7047]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7048]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7049]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7050]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7051]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7052]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7053]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7054]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7055]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7056]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7057]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7058]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7059]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7060]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7061]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7062]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7063]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7064]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7065]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7066]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7067]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7068]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7069]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp53[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]))) {
        ++(vlSymsp->__Vcoverage[7070]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp53[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7071]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp53[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp53[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7072]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp53[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7073]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp53[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7074]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp53[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7075]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7076]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7077]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7078]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7079]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7080]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7081]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7082]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7083]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7084]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7085]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7086]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7087]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7088]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7089]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7090]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7091]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7092]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7093]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7094]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7095]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7096]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7097]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7098]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7099]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7100]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7101]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp53[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]))) {
        ++(vlSymsp->__Vcoverage[7102]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp53[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7103]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp53[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp53[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7104]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp53[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7105]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp53[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7106]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp53[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7107]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7108]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7109]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7110]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7111]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7112]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7113]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7114]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7115]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7116]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7117]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7118]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7119]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7120]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7121]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7122]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7123]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7124]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7125]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7126]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7127]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7128]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7129]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7130]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7131]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7132]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7133]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp53[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]))) {
        ++(vlSymsp->__Vcoverage[7134]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp53[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7135]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp53[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp53[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7136]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp53[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7137]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp53[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7138]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp53[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7139]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7140]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7141]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7142]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7143]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7144]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7145]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7146]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7147]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7148]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7149]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7150]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7151]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7152]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7153]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7154]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7155]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7156]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7157]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7158]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7159]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7160]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7161]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7162]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7163]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7164]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7165]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp53[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]))) {
        ++(vlSymsp->__Vcoverage[7166]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp53[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7167]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp53[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp53[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A26__DOT__sum, vlSelfRef.multiplier__DOT__pp52, vlSelfRef.multiplier__DOT__pp53);
    vlSelfRef.multiplier__DOT__A27__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp54[0U];
    vlSelfRef.multiplier__DOT__A27__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp54[1U];
    vlSelfRef.multiplier__DOT__A27__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp54[2U];
    vlSelfRef.multiplier__DOT__A27__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp54[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp54[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7168]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp54[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7169]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp54[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7170]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp54[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7171]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7172]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7173]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7174]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7175]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7176]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7177]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7178]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7179]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7180]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7181]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7182]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7183]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7184]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7185]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7186]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7187]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7188]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7189]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7190]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7191]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7192]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7193]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7194]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7195]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7196]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7197]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp54[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]))) {
        ++(vlSymsp->__Vcoverage[7198]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp54[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7199]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp54[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp54[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7200]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp54[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7201]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp54[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7202]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp54[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7203]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7204]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7205]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7206]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7207]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7208]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7209]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7210]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7211]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7212]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7213]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7214]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7215]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7216]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7217]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7218]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7219]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7220]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7221]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7222]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7223]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7224]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7225]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7226]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7227]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7228]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7229]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp54[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]))) {
        ++(vlSymsp->__Vcoverage[7230]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp54[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7231]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp54[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp54[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7232]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp54[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7233]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp54[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7234]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp54[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7235]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7236]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7237]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7238]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7239]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7240]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7241]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7242]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7243]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7244]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7245]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7246]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7247]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7248]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7249]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7250]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7251]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7252]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7253]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7254]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7255]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp54[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]))) {
        ++(vlSymsp->__Vcoverage[7262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp54[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp54[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp54[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp54[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp54[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp54[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp54[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]))) {
        ++(vlSymsp->__Vcoverage[7294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp54[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp54[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp54[3U]));
    }
    vlSelfRef.multiplier__DOT__A27__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp55[0U];
    vlSelfRef.multiplier__DOT__A27__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp55[1U];
    vlSelfRef.multiplier__DOT__A27__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp55[2U];
    vlSelfRef.multiplier__DOT__A27__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp55[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp55[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp55[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp55[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp55[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp55[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]))) {
        ++(vlSymsp->__Vcoverage[7326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp55[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp55[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp55[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp55[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp55[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp55[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp55[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]))) {
        ++(vlSymsp->__Vcoverage[7358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp55[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp55[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp55[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp55[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp55[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp55[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp55[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]))) {
        ++(vlSymsp->__Vcoverage[7390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp55[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp55[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp55[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp55[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp55[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp55[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp55[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]))) {
        ++(vlSymsp->__Vcoverage[7422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp55[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp55[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp55[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A27__DOT__sum, vlSelfRef.multiplier__DOT__pp54, vlSelfRef.multiplier__DOT__pp55);
    vlSelfRef.multiplier__DOT__A28__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp56[0U];
    vlSelfRef.multiplier__DOT__A28__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp56[1U];
    vlSelfRef.multiplier__DOT__A28__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp56[2U];
    vlSelfRef.multiplier__DOT__A28__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp56[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp56[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp56[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp56[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp56[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7448]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7449]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7450]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7451]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7452]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7453]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp56[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]))) {
        ++(vlSymsp->__Vcoverage[7454]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp56[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7455]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp56[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp56[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7456]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp56[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7457]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp56[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7458]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp56[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7459]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7460]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7461]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7462]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7463]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7464]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7465]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7466]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7467]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7468]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7469]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7470]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7471]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7472]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7473]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7474]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7475]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7476]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7477]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7478]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7479]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7480]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7481]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7482]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7483]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7484]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7485]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp56[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]))) {
        ++(vlSymsp->__Vcoverage[7486]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp56[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7487]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp56[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp56[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7488]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp56[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7489]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp56[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7490]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp56[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7491]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7492]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7493]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7494]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7495]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7496]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7497]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7498]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7499]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7500]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7501]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7502]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7503]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7504]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7505]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7506]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7507]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7508]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7509]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7510]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7511]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7512]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7513]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7514]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7515]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7516]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7517]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp56[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]))) {
        ++(vlSymsp->__Vcoverage[7518]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp56[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7519]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp56[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp56[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7520]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp56[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7521]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp56[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7522]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp56[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7523]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7524]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7525]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7526]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7527]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7528]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7529]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7530]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7531]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7532]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7533]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7534]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7535]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7536]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7537]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7538]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7539]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7540]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7541]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7542]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7543]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7544]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7545]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7546]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7547]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7548]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7549]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp56[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]))) {
        ++(vlSymsp->__Vcoverage[7550]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp56[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7551]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp56[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp56[3U]));
    }
    vlSelfRef.multiplier__DOT__A28__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp57[0U];
    vlSelfRef.multiplier__DOT__A28__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp57[1U];
    vlSelfRef.multiplier__DOT__A28__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp57[2U];
    vlSelfRef.multiplier__DOT__A28__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp57[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp57[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7552]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp57[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7553]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp57[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7554]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp57[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7555]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7556]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7557]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7558]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7559]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7560]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7561]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7562]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7563]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7564]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7565]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7566]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7567]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7568]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7569]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7570]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7571]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7572]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7573]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7574]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7575]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7576]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7577]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7578]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7579]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7580]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7581]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp57[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]))) {
        ++(vlSymsp->__Vcoverage[7582]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp57[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7583]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp57[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp57[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7584]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp57[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7585]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp57[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7586]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp57[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7587]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7588]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7589]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7590]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7591]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7592]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7593]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7594]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7595]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7596]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7597]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7598]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7599]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7600]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7601]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7602]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7603]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7604]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7605]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7606]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7607]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7608]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7609]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7610]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7611]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7612]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7613]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp57[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]))) {
        ++(vlSymsp->__Vcoverage[7614]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp57[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7615]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp57[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp57[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7616]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp57[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7617]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp57[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7618]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp57[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7619]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7620]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7621]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7622]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7623]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7624]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7625]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7626]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7627]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7628]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7629]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7630]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7631]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7632]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7633]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7634]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7635]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7636]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7637]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7638]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7639]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7640]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7641]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7642]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7643]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7644]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7645]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp57[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]))) {
        ++(vlSymsp->__Vcoverage[7646]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp57[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7647]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp57[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp57[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7648]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp57[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7649]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp57[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7650]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp57[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7651]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7652]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7653]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7654]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7655]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7656]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7657]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7658]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7659]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7660]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7661]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7662]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7663]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7664]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7665]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7666]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7667]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7668]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7669]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7670]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7671]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7672]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7673]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7674]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7675]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7676]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7677]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp57[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]))) {
        ++(vlSymsp->__Vcoverage[7678]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp57[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7679]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp57[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp57[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A28__DOT__sum, vlSelfRef.multiplier__DOT__pp56, vlSelfRef.multiplier__DOT__pp57);
    vlSelfRef.multiplier__DOT__A29__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp58[0U];
    vlSelfRef.multiplier__DOT__A29__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp58[1U];
    vlSelfRef.multiplier__DOT__A29__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp58[2U];
    vlSelfRef.multiplier__DOT__A29__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp58[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp58[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7680]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp58[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7681]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp58[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7682]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp58[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7683]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7684]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7685]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7686]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7687]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7688]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7689]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7690]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7691]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7692]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7693]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7694]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7695]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7696]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7697]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7698]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7699]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7700]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7701]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7702]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7703]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7704]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7705]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7706]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7707]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7708]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7709]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp58[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]))) {
        ++(vlSymsp->__Vcoverage[7710]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp58[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7711]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp58[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp58[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7712]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp58[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7713]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp58[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7714]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp58[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7715]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7716]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7717]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7718]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7719]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7720]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7721]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7722]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7723]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7724]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7725]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7726]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7727]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7728]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7729]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7730]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7731]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7732]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7733]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7734]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7735]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7736]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7737]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7738]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7739]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7740]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7741]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp58[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]))) {
        ++(vlSymsp->__Vcoverage[7742]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp58[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7743]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp58[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp58[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7744]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp58[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7745]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp58[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7746]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp58[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7747]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7748]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7749]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7750]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7751]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7752]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7753]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7754]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7755]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7756]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7757]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7758]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7759]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7760]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7761]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7762]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7763]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7764]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7765]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7766]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7767]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7768]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7769]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7770]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7771]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7772]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7773]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp58[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]))) {
        ++(vlSymsp->__Vcoverage[7774]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp58[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7775]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp58[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp58[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7776]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp58[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7777]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp58[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7778]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp58[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7779]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7780]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7781]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7782]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7783]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7784]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7785]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7786]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7787]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7788]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7789]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7790]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7791]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7792]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7793]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7794]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7795]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7796]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7797]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7798]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7799]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7800]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7801]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7802]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7803]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7804]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7805]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp58[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]))) {
        ++(vlSymsp->__Vcoverage[7806]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp58[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7807]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp58[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp58[3U]));
    }
    vlSelfRef.multiplier__DOT__A29__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp59[0U];
    vlSelfRef.multiplier__DOT__A29__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp59[1U];
    vlSelfRef.multiplier__DOT__A29__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp59[2U];
    vlSelfRef.multiplier__DOT__A29__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp59[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp59[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7808]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp59[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7809]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp59[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7810]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp59[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7811]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7812]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7813]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7814]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7815]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7816]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7817]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7818]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7819]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7820]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7821]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7822]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7823]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7824]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7825]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7826]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7827]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7828]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7829]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7830]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7831]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7832]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7833]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7834]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7835]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7836]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7837]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp59[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]))) {
        ++(vlSymsp->__Vcoverage[7838]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp59[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7839]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp59[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp59[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7840]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp59[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7841]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp59[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7842]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp59[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7843]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7844]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7845]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7846]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7847]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7848]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7849]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7850]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7851]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7852]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7853]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7854]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7855]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7856]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7857]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7858]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7859]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7860]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7861]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7862]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7863]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7864]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7865]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7866]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7867]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7868]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7869]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp59[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]))) {
        ++(vlSymsp->__Vcoverage[7870]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp59[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7871]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp59[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp59[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7872]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp59[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7873]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp59[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7874]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp59[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7875]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7876]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7877]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7878]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7879]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7880]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7881]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7882]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7883]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7884]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7885]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7886]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7887]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7888]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7889]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7890]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7891]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7892]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7893]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7894]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7895]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7896]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7897]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7898]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7899]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7900]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7901]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp59[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]))) {
        ++(vlSymsp->__Vcoverage[7902]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp59[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7903]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp59[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp59[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7904]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp59[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7905]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp59[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7906]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp59[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7907]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7908]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7909]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7910]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7911]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7912]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7913]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7914]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7915]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7916]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7917]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7918]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7919]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7920]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7921]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7922]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7923]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7924]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7925]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7926]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7927]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7928]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7929]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7930]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7931]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7932]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7933]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp59[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]))) {
        ++(vlSymsp->__Vcoverage[7934]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp59[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7935]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp59[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp59[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A29__DOT__sum, vlSelfRef.multiplier__DOT__pp58, vlSelfRef.multiplier__DOT__pp59);
    vlSelfRef.multiplier__DOT__A30__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp60[0U];
    vlSelfRef.multiplier__DOT__A30__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp60[1U];
    vlSelfRef.multiplier__DOT__A30__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp60[2U];
    vlSelfRef.multiplier__DOT__A30__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp60[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp60[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7936]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp60[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7937]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp60[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7938]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp60[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7939]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7940]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7941]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7942]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7943]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7944]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7945]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7946]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7947]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7948]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7949]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7950]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7951]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7952]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7953]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7954]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7955]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7956]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7957]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7958]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7959]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7960]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7961]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7962]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7963]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7964]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7965]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp60[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]))) {
        ++(vlSymsp->__Vcoverage[7966]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp60[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7967]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp60[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp60[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7968]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp60[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7969]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp60[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7970]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp60[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7971]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7972]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7973]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7974]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7975]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7976]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7977]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7978]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7979]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7980]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7981]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7982]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7983]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7984]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7985]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7986]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7987]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7988]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7989]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7990]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7991]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7992]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7993]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7994]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7995]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7996]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7997]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp60[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]))) {
        ++(vlSymsp->__Vcoverage[7998]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp60[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7999]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp60[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp60[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8000]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp60[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8001]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp60[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8002]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp60[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8003]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8004]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8005]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8006]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8007]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8008]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8009]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8010]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8011]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8012]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8013]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8014]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8015]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8016]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8017]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8018]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp60[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]))) {
        ++(vlSymsp->__Vcoverage[8019]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp60[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp60[2U]));
    }
}

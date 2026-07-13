// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24354]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24355]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24356]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24357]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24358]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24359]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24360]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24361]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24362]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24363]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24364]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24365]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24366]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24367]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24368]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24369]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24370]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24371]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24372]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24373]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24374]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24375]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24376]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24377]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24378]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24379]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24380]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24381]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24382]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A61__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24383]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24384]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24385]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24386]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24387]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24388]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24389]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24390]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24391]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24392]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24393]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24394]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24395]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24396]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24397]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24398]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24399]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24400]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24401]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24402]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24403]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24404]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24405]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24406]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24407]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24408]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24409]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24410]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24411]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24412]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24413]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24414]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A61__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24415]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24416]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24417]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24418]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24419]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24420]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24421]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24422]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24423]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24424]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24425]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24426]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24427]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24428]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24429]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24430]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24431]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24432]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24433]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24434]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24435]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24436]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24437]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24438]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24439]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24440]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24441]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24442]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24443]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24444]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24445]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24446]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A61__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24447]);
        vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A61__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A61__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__l4_1[0U] = vlSelfRef.multiplier__DOT__A61__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l4_1[1U] = vlSelfRef.multiplier__DOT__A61__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l4_1[2U] = vlSelfRef.multiplier__DOT__A61__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l4_1[3U] = vlSelfRef.multiplier__DOT__A61__DOT__sum[3U];
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A62__DOT__sum, vlSelfRef.multiplier__DOT__A60__DOT__sum, vlSelfRef.multiplier__DOT__A61__DOT__sum);
    vlSelfRef.multiplier__DOT__A62__DOT__a[0U] = vlSelfRef.multiplier__DOT__l4_0[0U];
    vlSelfRef.multiplier__DOT__A62__DOT__a[1U] = vlSelfRef.multiplier__DOT__l4_0[1U];
    vlSelfRef.multiplier__DOT__A62__DOT__a[2U] = vlSelfRef.multiplier__DOT__l4_0[2U];
    vlSelfRef.multiplier__DOT__A62__DOT__a[3U] = vlSelfRef.multiplier__DOT__l4_0[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16128]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16129]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16130]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16131]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16132]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16133]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16134]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16135]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16136]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16137]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16138]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16139]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16140]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16141]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16142]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16143]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16144]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16145]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16146]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16147]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16148]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16149]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16150]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16151]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16152]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16153]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16154]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16155]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16156]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16157]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l4_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16158]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l4_0[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16159]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l4_0[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16160]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16161]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16162]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16163]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16164]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16165]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16166]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16167]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16168]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16169]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16170]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16171]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16172]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16173]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16174]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16175]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16176]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16177]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16178]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16179]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16180]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16181]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16182]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16183]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16184]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16185]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16186]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16187]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16188]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16189]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l4_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16190]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l4_0[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16191]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l4_0[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16192]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16193]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16194]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16195]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16196]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16197]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16198]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16199]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16200]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16201]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16202]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16203]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16204]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16205]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16206]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16207]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16208]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16209]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16210]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16211]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16212]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16213]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16214]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16215]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16216]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16217]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16218]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16219]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16220]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16221]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l4_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16222]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l4_0[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16223]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l4_0[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16224]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16225]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16226]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16227]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16228]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16229]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16230]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16231]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16232]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16233]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16234]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16235]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16236]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16237]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16238]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16239]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16240]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16241]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16242]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16243]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16244]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16245]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16246]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16247]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16248]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16249]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16250]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16251]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16252]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16253]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l4_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16254]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l4_0[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16255]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_0[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l4_0[3U]));
    }
    vlSelfRef.multiplier__DOT__A62__DOT__b[0U] = vlSelfRef.multiplier__DOT__l4_1[0U];
    vlSelfRef.multiplier__DOT__A62__DOT__b[1U] = vlSelfRef.multiplier__DOT__l4_1[1U];
    vlSelfRef.multiplier__DOT__A62__DOT__b[2U] = vlSelfRef.multiplier__DOT__l4_1[2U];
    vlSelfRef.multiplier__DOT__A62__DOT__b[3U] = vlSelfRef.multiplier__DOT__l4_1[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16256]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16257]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16258]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16259]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16260]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16261]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16262]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16263]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16264]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16265]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16266]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16267]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16268]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16269]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16270]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16271]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16272]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16273]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16274]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16275]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16276]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16277]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16278]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16279]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16280]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16281]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16282]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16283]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16284]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16285]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l4_1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]))) {
        ++(vlSymsp->__Vcoverage[16286]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l4_1[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16287]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l4_1[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16288]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16289]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16290]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16291]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16292]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16293]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16294]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16295]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16296]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16297]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16298]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16299]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16300]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16301]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16302]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16303]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16304]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16305]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16306]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16307]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16308]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16309]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16310]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16311]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16312]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16313]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16314]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16315]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16316]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16317]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l4_1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]))) {
        ++(vlSymsp->__Vcoverage[16318]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l4_1[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16319]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l4_1[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16320]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16321]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16322]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16323]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16324]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16325]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16326]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16327]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16328]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16329]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16330]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16331]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16332]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16333]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16334]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16335]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16336]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16337]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16338]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16339]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16340]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16341]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16342]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16343]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16344]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16345]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16346]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16347]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16348]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16349]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l4_1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]))) {
        ++(vlSymsp->__Vcoverage[16350]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l4_1[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16351]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l4_1[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16352]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16353]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16354]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16355]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16356]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16357]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16358]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16359]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16360]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16361]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16362]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16363]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16364]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16365]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16366]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16367]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16368]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16369]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16370]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16371]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16372]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16373]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16374]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16375]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16376]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16377]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16378]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16379]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16380]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16381]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l4_1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]))) {
        ++(vlSymsp->__Vcoverage[16382]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l4_1[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16383]);
        vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l4_1[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l4_1[3U]));
    }
    vlSelfRef.product[0U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[0U];
    vlSelfRef.product[1U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[1U];
    vlSelfRef.product[2U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[2U];
    vlSelfRef.product[3U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24448]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24449]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24450]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24451]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24452]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24453]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24454]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24455]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24456]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24457]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24458]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24459]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24460]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24461]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24462]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24463]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24464]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24465]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24466]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24467]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24468]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24469]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24470]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24471]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24472]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24473]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24474]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24475]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24476]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24477]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]))) {
        ++(vlSymsp->__Vcoverage[24478]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__A62__DOT__sum[0U] 
          ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24479]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24480]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24481]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24482]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24483]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24484]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24485]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24486]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24487]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24488]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24489]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24490]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24491]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24492]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24493]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24494]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24495]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24496]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24497]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24498]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24499]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24500]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24501]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24502]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24503]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24504]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24505]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24506]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24507]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24508]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24509]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]))) {
        ++(vlSymsp->__Vcoverage[24510]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__A62__DOT__sum[1U] 
          ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24511]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24512]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24513]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24514]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24515]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24516]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24517]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24518]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24519]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24520]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24521]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24522]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24523]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24524]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24525]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24526]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24527]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24528]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24529]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24530]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24531]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24532]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24533]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24534]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24535]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24536]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24537]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24538]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24539]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24540]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24541]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]))) {
        ++(vlSymsp->__Vcoverage[24542]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__A62__DOT__sum[2U] 
          ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24543]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24544]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24545]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24546]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
               ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24547]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24548]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24549]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24550]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                  ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24551]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24552]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24553]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24554]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                   ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24555]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24556]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24557]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24558]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                    ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24559]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24560]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24561]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24562]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                     ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24563]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24564]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24565]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24566]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                      ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24567]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24568]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24569]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24570]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                       ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24571]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24572]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24573]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
                        ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]))) {
        ++(vlSymsp->__Vcoverage[24574]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__A62__DOT__sum[3U] 
          ^ vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[24575]);
        vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT__A62__DOT____Vtogcov__sum[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__A62__DOT__sum[3U]));
    }
    vlSelfRef.multiplier__DOT__product[0U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__product[1U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__product[2U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__product[3U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[3U];
    vlSelfRef.multiplier__DOT__l5_0[0U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[0U];
    vlSelfRef.multiplier__DOT__l5_0[1U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[1U];
    vlSelfRef.multiplier__DOT__l5_0[2U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[2U];
    vlSelfRef.multiplier__DOT__l5_0[3U] = vlSelfRef.multiplier__DOT__A62__DOT__sum[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__product[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__product[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__product[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__product[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__product[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__product[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__product[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__product[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__product[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__product[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__product[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__product[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__product[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__product[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__product[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__product[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__product[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__product[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__product[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__product[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__product[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__product[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__product[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__product[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__product[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__product[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__product[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__product[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__product[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__product[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__product[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[0U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__product[0U] ^ 
          vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__product[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__product[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__product[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__product[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__product[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__product[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__product[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__product[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__product[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__product[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__product[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__product[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__product[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__product[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__product[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__product[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__product[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__product[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__product[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__product[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__product[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__product[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__product[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__product[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__product[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__product[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__product[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__product[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__product[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__product[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__product[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__product[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[1U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__product[1U] ^ 
          vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__product[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__product[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__product[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__product[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__product[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__product[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__product[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__product[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__product[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__product[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__product[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__product[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__product[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__product[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__product[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__product[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__product[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__product[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__product[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__product[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__product[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__product[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__product[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__product[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__product[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__product[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__product[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__product[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__product[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__product[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__product[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__product[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[2U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__product[2U] ^ 
          vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__product[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__product[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__product[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__product[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__product[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__product[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__product[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__product[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__product[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__product[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__product[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__product[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__product[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__product[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__product[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__product[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__product[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__product[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__product[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__product[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__product[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__product[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__product[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__product[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__product[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__product[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__product[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__product[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__product[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__product[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__product[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__product[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__product[3U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__product[3U] ^ 
          vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.multiplier__DOT____Vtogcov__product[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__product[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__product[3U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16384]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16385]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16386]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16387]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16388]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16389]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16390]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16391]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16392]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16393]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16394]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16395]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16396]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16397]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16398]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16399]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16400]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16401]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16402]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16403]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16404]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16405]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16406]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16407]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16408]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16409]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16410]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16411]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16412]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16413]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l5_0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]))) {
        ++(vlSymsp->__Vcoverage[16414]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__l5_0[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16415]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l5_0[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16416]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16417]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16418]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16419]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16420]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16421]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16422]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16423]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16424]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16425]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16426]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16427]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16428]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16429]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16430]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16431]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16432]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16433]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16434]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16435]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16436]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16437]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16438]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16439]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16440]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16441]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16442]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16443]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16444]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16445]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l5_0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]))) {
        ++(vlSymsp->__Vcoverage[16446]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__l5_0[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16447]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l5_0[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16448]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16449]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16450]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16451]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16452]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16453]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16454]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16455]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16456]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16457]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16458]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16459]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16460]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16461]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16462]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16463]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16464]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16465]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16466]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16467]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16468]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16469]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16470]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16471]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16472]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16473]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16474]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16475]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16476]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16477]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l5_0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]))) {
        ++(vlSymsp->__Vcoverage[16478]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__l5_0[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16479]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l5_0[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16480]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16481]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16482]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16483]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16484]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16485]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16486]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16487]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16488]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16489]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16490]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16491]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16492]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16493]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16494]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16495]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16496]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16497]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16498]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16499]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16500]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16501]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16502]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16503]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16504]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16505]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16506]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16507]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16508]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16509]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__l5_0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]))) {
        ++(vlSymsp->__Vcoverage[16510]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__l5_0[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[16511]);
        vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__l5_0[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__l5_0[3U]));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

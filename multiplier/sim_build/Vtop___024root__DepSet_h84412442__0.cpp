// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_81;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_93;
    VlWide<4>/*127:0*/ __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<4>/*127:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_113;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_117;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_128;
    VlWide<4>/*127:0*/ __Vtemp_129;
    VlWide<4>/*127:0*/ __Vtemp_132;
    VlWide<4>/*127:0*/ __Vtemp_133;
    VlWide<4>/*127:0*/ __Vtemp_136;
    VlWide<4>/*127:0*/ __Vtemp_137;
    VlWide<4>/*127:0*/ __Vtemp_140;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_144;
    VlWide<4>/*127:0*/ __Vtemp_145;
    VlWide<4>/*127:0*/ __Vtemp_148;
    VlWide<4>/*127:0*/ __Vtemp_149;
    VlWide<4>/*127:0*/ __Vtemp_152;
    VlWide<4>/*127:0*/ __Vtemp_153;
    VlWide<4>/*127:0*/ __Vtemp_156;
    VlWide<4>/*127:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_160;
    VlWide<4>/*127:0*/ __Vtemp_161;
    VlWide<4>/*127:0*/ __Vtemp_164;
    VlWide<4>/*127:0*/ __Vtemp_165;
    VlWide<4>/*127:0*/ __Vtemp_168;
    VlWide<4>/*127:0*/ __Vtemp_169;
    VlWide<4>/*127:0*/ __Vtemp_172;
    VlWide<4>/*127:0*/ __Vtemp_173;
    VlWide<4>/*127:0*/ __Vtemp_176;
    VlWide<4>/*127:0*/ __Vtemp_177;
    VlWide<4>/*127:0*/ __Vtemp_180;
    VlWide<4>/*127:0*/ __Vtemp_181;
    VlWide<4>/*127:0*/ __Vtemp_184;
    VlWide<4>/*127:0*/ __Vtemp_185;
    VlWide<4>/*127:0*/ __Vtemp_188;
    VlWide<4>/*127:0*/ __Vtemp_189;
    VlWide<4>/*127:0*/ __Vtemp_192;
    VlWide<4>/*127:0*/ __Vtemp_193;
    VlWide<4>/*127:0*/ __Vtemp_196;
    VlWide<4>/*127:0*/ __Vtemp_197;
    VlWide<4>/*127:0*/ __Vtemp_200;
    VlWide<4>/*127:0*/ __Vtemp_201;
    VlWide<4>/*127:0*/ __Vtemp_204;
    VlWide<4>/*127:0*/ __Vtemp_205;
    VlWide<4>/*127:0*/ __Vtemp_208;
    VlWide<4>/*127:0*/ __Vtemp_209;
    VlWide<4>/*127:0*/ __Vtemp_212;
    VlWide<4>/*127:0*/ __Vtemp_213;
    VlWide<4>/*127:0*/ __Vtemp_216;
    VlWide<4>/*127:0*/ __Vtemp_217;
    VlWide<4>/*127:0*/ __Vtemp_220;
    VlWide<4>/*127:0*/ __Vtemp_221;
    VlWide<4>/*127:0*/ __Vtemp_224;
    VlWide<4>/*127:0*/ __Vtemp_225;
    VlWide<4>/*127:0*/ __Vtemp_228;
    VlWide<4>/*127:0*/ __Vtemp_229;
    VlWide<4>/*127:0*/ __Vtemp_232;
    VlWide<4>/*127:0*/ __Vtemp_233;
    VlWide<4>/*127:0*/ __Vtemp_236;
    VlWide<4>/*127:0*/ __Vtemp_237;
    VlWide<4>/*127:0*/ __Vtemp_240;
    VlWide<4>/*127:0*/ __Vtemp_241;
    VlWide<4>/*127:0*/ __Vtemp_244;
    VlWide<4>/*127:0*/ __Vtemp_245;
    VlWide<4>/*127:0*/ __Vtemp_248;
    VlWide<4>/*127:0*/ __Vtemp_249;
    VlWide<4>/*127:0*/ __Vtemp_252;
    VlWide<4>/*127:0*/ __Vtemp_253;
    // Body
    vlSelfRef.multiplier__DOT__a = vlSelfRef.a;
    vlSelfRef.multiplier__DOT__b = vlSelfRef.b;
    if ((1U & ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.multiplier__DOT____Vtogcov__a)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelfRef.a)))));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 1U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffffffdULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 1U))))) 
                                                      << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 2U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffffffbULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 2U))))) 
                                                      << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 3U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffffff7ULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 3U))))) 
                                                      << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 4U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffffffefULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 4U))))) 
                                                      << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 5U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffffffdfULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 5U))))) 
                                                      << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 6U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffffffbfULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 6U))))) 
                                                      << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 7U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffffff7fULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 7U))))) 
                                                      << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 8U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 8U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffffeffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 8U))))) 
                                                      << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 9U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                       >> 9U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffffdffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 9U))))) 
                                                      << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0xaU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                         >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffffbffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0xaU))))) 
                                                      << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0xbU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                         >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffff7ffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0xbU))))) 
                                                      << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0xcU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                         >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffffefffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0xcU))))) 
                                                      << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0xdU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                         >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffffdfffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0xdU))))) 
                                                      << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0xeU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                         >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffffbfffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0xeU))))) 
                                                      << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0xfU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                         >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffff7fffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0xfU))))) 
                                                      << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x10U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffeffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x10U))))) 
                                                      << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x11U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffdffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x11U))))) 
                                                      << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x12U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffffbffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x12U))))) 
                                                      << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x13U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffff7ffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x13U))))) 
                                                      << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x14U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffefffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x14U))))) 
                                                      << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x15U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffdfffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x15U))))) 
                                                      << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x16U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffffbfffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x16U))))) 
                                                      << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x17U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffff7fffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x17U))))) 
                                                      << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x18U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffeffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x18U))))) 
                                                      << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x19U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffdffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x19U))))) 
                                                      << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x1aU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffffbffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x1aU))))) 
                                                      << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x1bU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffff7ffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x1bU))))) 
                                                      << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x1cU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffefffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x1cU))))) 
                                                      << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x1dU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffdfffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x1dU))))) 
                                                      << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x1eU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffffbfffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x1eU))))) 
                                                      << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x1fU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffff7fffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x1fU))))) 
                                                      << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x20U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffeffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x20U))))) 
                                                      << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x21U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffdffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x21U))))) 
                                                      << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x22U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffffbffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x22U))))) 
                                                      << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x23U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffff7ffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x23U))))) 
                                                      << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x24U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffefffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x24U))))) 
                                                      << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x25U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffdfffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x25U))))) 
                                                      << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x26U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffffbfffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x26U))))) 
                                                      << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x27U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffff7fffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x27U))))) 
                                                      << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x28U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffeffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x28U))))) 
                                                      << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x29U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffdffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x29U))))) 
                                                      << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x2aU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffffbffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x2aU))))) 
                                                      << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x2bU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffff7ffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x2bU))))) 
                                                      << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x2cU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffefffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x2cU))))) 
                                                      << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x2dU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffdfffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x2eU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffffbfffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x2eU))))) 
                                                      << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x2fU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffff7fffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x2fU))))) 
                                                      << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x30U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffeffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x30U))))) 
                                                      << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x31U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffdffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x31U))))) 
                                                      << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x32U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfffbffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x32U))))) 
                                                      << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x33U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfff7ffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x33U))))) 
                                                      << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x34U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffefffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x34U))))) 
                                                      << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x35U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffdfffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x35U))))) 
                                                      << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x36U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xffbfffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x36U))))) 
                                                      << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x37U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xff7fffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x37U))))) 
                                                      << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x38U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfeffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x38U))))) 
                                                      << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x39U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x39U))))) 
                                                      << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x3aU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x3aU))))) 
                                                      << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x3bU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x3bU))))) 
                                                      << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x3cU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x3cU))))) 
                                                      << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x3dU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x3dU))))) 
                                                      << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.a >> 0x3eU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__a 
                                                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x3eU))))) 
                                                      << 0x3eU));
    }
    if ((IData)(((vlSelfRef.a ^ vlSelfRef.multiplier__DOT____Vtogcov__a) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.multiplier__DOT____Vtogcov__a = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__a) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x3fU))))) 
                                                      << 0x3fU));
    }
    if ((1U & ((IData)(vlSelfRef.b) ^ (IData)(vlSelfRef.multiplier__DOT____Vtogcov__b)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelfRef.b)))));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 1U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 1U))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffffffdULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 1U))))) 
                                                      << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 2U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 2U))))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffffffbULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 2U))))) 
                                                      << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 3U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 3U))))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffffff7ULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 3U))))) 
                                                      << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 4U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 4U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffffffefULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 4U))))) 
                                                      << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 5U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 5U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffffffdfULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 5U))))) 
                                                      << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 6U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 6U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffffffbfULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 6U))))) 
                                                      << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 7U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 7U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffffff7fULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 7U))))) 
                                                      << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 8U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 8U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffffeffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 8U))))) 
                                                      << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 9U)) ^ (IData)(
                                                      (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                       >> 9U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffffdffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 9U))))) 
                                                      << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0xaU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                         >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffffbffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0xaU))))) 
                                                      << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0xbU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                         >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffff7ffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0xbU))))) 
                                                      << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0xcU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                         >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffffefffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0xcU))))) 
                                                      << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0xdU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                         >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffffdfffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0xdU))))) 
                                                      << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0xeU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                         >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffffbfffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0xeU))))) 
                                                      << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0xfU)) ^ (IData)(
                                                        (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                         >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffff7fffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0xfU))))) 
                                                      << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x10U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffeffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x10U))))) 
                                                      << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x11U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffdffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x11U))))) 
                                                      << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x12U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffffbffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x12U))))) 
                                                      << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x13U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffff7ffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x13U))))) 
                                                      << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x14U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffefffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x14U))))) 
                                                      << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x15U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffdfffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x15U))))) 
                                                      << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x16U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffffbfffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x16U))))) 
                                                      << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x17U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffff7fffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x17U))))) 
                                                      << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x18U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffeffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x18U))))) 
                                                      << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x19U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffdffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x19U))))) 
                                                      << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x1aU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffffbffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x1aU))))) 
                                                      << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x1bU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffff7ffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x1bU))))) 
                                                      << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x1cU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffefffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x1cU))))) 
                                                      << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x1dU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffdfffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x1dU))))) 
                                                      << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x1eU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffffbfffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x1eU))))) 
                                                      << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x1fU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffff7fffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x1fU))))) 
                                                      << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x20U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffeffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x20U))))) 
                                                      << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x21U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffdffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x21U))))) 
                                                      << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x22U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffffbffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x22U))))) 
                                                      << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x23U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffff7ffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x23U))))) 
                                                      << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x24U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffefffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x24U))))) 
                                                      << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x25U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffdfffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x25U))))) 
                                                      << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x26U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffffbfffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x26U))))) 
                                                      << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x27U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffff7fffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x27U))))) 
                                                      << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x28U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffeffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x28U))))) 
                                                      << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x29U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffdffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x29U))))) 
                                                      << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x2aU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffffbffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x2aU))))) 
                                                      << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x2bU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffff7ffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x2bU))))) 
                                                      << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x2cU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffefffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x2cU))))) 
                                                      << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x2dU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffdfffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x2eU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffffbfffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x2eU))))) 
                                                      << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x2fU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffff7fffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x2fU))))) 
                                                      << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x30U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffeffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x30U))))) 
                                                      << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x31U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffdffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x31U))))) 
                                                      << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x32U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfffbffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x32U))))) 
                                                      << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x33U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfff7ffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x33U))))) 
                                                      << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x34U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffefffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x34U))))) 
                                                      << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x35U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffdfffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x35U))))) 
                                                      << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x36U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xffbfffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x36U))))) 
                                                      << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x37U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xff7fffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x37U))))) 
                                                      << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x38U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfeffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x38U))))) 
                                                      << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x39U)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x39U))))) 
                                                      << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x3aU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x3aU))))) 
                                                      << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x3bU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x3bU))))) 
                                                      << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x3cU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x3cU))))) 
                                                      << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x3dU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x3dU))))) 
                                                      << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.b >> 0x3eU)) ^ (IData)(
                                                         (vlSelfRef.multiplier__DOT____Vtogcov__b 
                                                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x3eU))))) 
                                                      << 0x3eU));
    }
    if ((IData)(((vlSelfRef.b ^ vlSelfRef.multiplier__DOT____Vtogcov__b) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.multiplier__DOT____Vtogcov__b = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.multiplier__DOT____Vtogcov__b) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelfRef.b 
                                                                                >> 0x3fU))))) 
                                                      << 0x3fU));
    }
    if ((1U & (IData)(vlSelfRef.b))) {
        vlSelfRef.multiplier__DOT__pp0[0U] = (IData)(vlSelfRef.a);
        vlSelfRef.multiplier__DOT__pp0[1U] = (IData)(
                                                     (vlSelfRef.a 
                                                      >> 0x20U));
    } else {
        vlSelfRef.multiplier__DOT__pp0[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp0[1U] = 0U;
    }
    vlSelfRef.multiplier__DOT__pp0[2U] = 0U;
    vlSelfRef.multiplier__DOT__pp0[3U] = 0U;
    __Vtemp_4[0U] = (IData)(vlSelfRef.a);
    __Vtemp_4[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_5, __Vtemp_4, 1U);
    if ((1U & (IData)((vlSelfRef.b >> 1U)))) {
        vlSelfRef.multiplier__DOT__pp1[0U] = __Vtemp_5[0U];
        vlSelfRef.multiplier__DOT__pp1[1U] = __Vtemp_5[1U];
        vlSelfRef.multiplier__DOT__pp1[2U] = __Vtemp_5[2U];
        vlSelfRef.multiplier__DOT__pp1[3U] = __Vtemp_5[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp1[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp1[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp1[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp1[3U] = 0U;
    }
    __Vtemp_8[0U] = (IData)(vlSelfRef.a);
    __Vtemp_8[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_8[2U] = 0U;
    __Vtemp_8[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_9, __Vtemp_8, 2U);
    if ((1U & (IData)((vlSelfRef.b >> 2U)))) {
        vlSelfRef.multiplier__DOT__pp2[0U] = __Vtemp_9[0U];
        vlSelfRef.multiplier__DOT__pp2[1U] = __Vtemp_9[1U];
        vlSelfRef.multiplier__DOT__pp2[2U] = __Vtemp_9[2U];
        vlSelfRef.multiplier__DOT__pp2[3U] = __Vtemp_9[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp2[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp2[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp2[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp2[3U] = 0U;
    }
    __Vtemp_12[0U] = (IData)(vlSelfRef.a);
    __Vtemp_12[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_12[2U] = 0U;
    __Vtemp_12[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_13, __Vtemp_12, 3U);
    if ((1U & (IData)((vlSelfRef.b >> 3U)))) {
        vlSelfRef.multiplier__DOT__pp3[0U] = __Vtemp_13[0U];
        vlSelfRef.multiplier__DOT__pp3[1U] = __Vtemp_13[1U];
        vlSelfRef.multiplier__DOT__pp3[2U] = __Vtemp_13[2U];
        vlSelfRef.multiplier__DOT__pp3[3U] = __Vtemp_13[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp3[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp3[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp3[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp3[3U] = 0U;
    }
    __Vtemp_16[0U] = (IData)(vlSelfRef.a);
    __Vtemp_16[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_16[2U] = 0U;
    __Vtemp_16[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_17, __Vtemp_16, 4U);
    if ((1U & (IData)((vlSelfRef.b >> 4U)))) {
        vlSelfRef.multiplier__DOT__pp4[0U] = __Vtemp_17[0U];
        vlSelfRef.multiplier__DOT__pp4[1U] = __Vtemp_17[1U];
        vlSelfRef.multiplier__DOT__pp4[2U] = __Vtemp_17[2U];
        vlSelfRef.multiplier__DOT__pp4[3U] = __Vtemp_17[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp4[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp4[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp4[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp4[3U] = 0U;
    }
    __Vtemp_20[0U] = (IData)(vlSelfRef.a);
    __Vtemp_20[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_20[2U] = 0U;
    __Vtemp_20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_21, __Vtemp_20, 5U);
    if ((1U & (IData)((vlSelfRef.b >> 5U)))) {
        vlSelfRef.multiplier__DOT__pp5[0U] = __Vtemp_21[0U];
        vlSelfRef.multiplier__DOT__pp5[1U] = __Vtemp_21[1U];
        vlSelfRef.multiplier__DOT__pp5[2U] = __Vtemp_21[2U];
        vlSelfRef.multiplier__DOT__pp5[3U] = __Vtemp_21[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp5[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp5[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp5[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp5[3U] = 0U;
    }
    __Vtemp_24[0U] = (IData)(vlSelfRef.a);
    __Vtemp_24[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_24[2U] = 0U;
    __Vtemp_24[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_25, __Vtemp_24, 6U);
    if ((1U & (IData)((vlSelfRef.b >> 6U)))) {
        vlSelfRef.multiplier__DOT__pp6[0U] = __Vtemp_25[0U];
        vlSelfRef.multiplier__DOT__pp6[1U] = __Vtemp_25[1U];
        vlSelfRef.multiplier__DOT__pp6[2U] = __Vtemp_25[2U];
        vlSelfRef.multiplier__DOT__pp6[3U] = __Vtemp_25[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp6[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp6[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp6[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp6[3U] = 0U;
    }
    __Vtemp_28[0U] = (IData)(vlSelfRef.a);
    __Vtemp_28[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_28[2U] = 0U;
    __Vtemp_28[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_29, __Vtemp_28, 7U);
    if ((1U & (IData)((vlSelfRef.b >> 7U)))) {
        vlSelfRef.multiplier__DOT__pp7[0U] = __Vtemp_29[0U];
        vlSelfRef.multiplier__DOT__pp7[1U] = __Vtemp_29[1U];
        vlSelfRef.multiplier__DOT__pp7[2U] = __Vtemp_29[2U];
        vlSelfRef.multiplier__DOT__pp7[3U] = __Vtemp_29[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp7[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp7[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp7[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp7[3U] = 0U;
    }
    __Vtemp_32[0U] = (IData)(vlSelfRef.a);
    __Vtemp_32[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_32[2U] = 0U;
    __Vtemp_32[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_33, __Vtemp_32, 8U);
    if ((1U & (IData)((vlSelfRef.b >> 8U)))) {
        vlSelfRef.multiplier__DOT__pp8[0U] = __Vtemp_33[0U];
        vlSelfRef.multiplier__DOT__pp8[1U] = __Vtemp_33[1U];
        vlSelfRef.multiplier__DOT__pp8[2U] = __Vtemp_33[2U];
        vlSelfRef.multiplier__DOT__pp8[3U] = __Vtemp_33[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp8[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp8[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp8[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp8[3U] = 0U;
    }
    __Vtemp_36[0U] = (IData)(vlSelfRef.a);
    __Vtemp_36[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_36[2U] = 0U;
    __Vtemp_36[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_37, __Vtemp_36, 9U);
    if ((1U & (IData)((vlSelfRef.b >> 9U)))) {
        vlSelfRef.multiplier__DOT__pp9[0U] = __Vtemp_37[0U];
        vlSelfRef.multiplier__DOT__pp9[1U] = __Vtemp_37[1U];
        vlSelfRef.multiplier__DOT__pp9[2U] = __Vtemp_37[2U];
        vlSelfRef.multiplier__DOT__pp9[3U] = __Vtemp_37[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp9[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp9[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp9[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp9[3U] = 0U;
    }
    __Vtemp_40[0U] = (IData)(vlSelfRef.a);
    __Vtemp_40[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_40[2U] = 0U;
    __Vtemp_40[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_41, __Vtemp_40, 0xaU);
    if ((1U & (IData)((vlSelfRef.b >> 0xaU)))) {
        vlSelfRef.multiplier__DOT__pp10[0U] = __Vtemp_41[0U];
        vlSelfRef.multiplier__DOT__pp10[1U] = __Vtemp_41[1U];
        vlSelfRef.multiplier__DOT__pp10[2U] = __Vtemp_41[2U];
        vlSelfRef.multiplier__DOT__pp10[3U] = __Vtemp_41[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp10[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp10[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp10[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp10[3U] = 0U;
    }
    __Vtemp_44[0U] = (IData)(vlSelfRef.a);
    __Vtemp_44[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_44[2U] = 0U;
    __Vtemp_44[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_45, __Vtemp_44, 0xbU);
    if ((1U & (IData)((vlSelfRef.b >> 0xbU)))) {
        vlSelfRef.multiplier__DOT__pp11[0U] = __Vtemp_45[0U];
        vlSelfRef.multiplier__DOT__pp11[1U] = __Vtemp_45[1U];
        vlSelfRef.multiplier__DOT__pp11[2U] = __Vtemp_45[2U];
        vlSelfRef.multiplier__DOT__pp11[3U] = __Vtemp_45[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp11[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp11[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp11[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp11[3U] = 0U;
    }
    __Vtemp_48[0U] = (IData)(vlSelfRef.a);
    __Vtemp_48[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_48[2U] = 0U;
    __Vtemp_48[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_49, __Vtemp_48, 0xcU);
    if ((1U & (IData)((vlSelfRef.b >> 0xcU)))) {
        vlSelfRef.multiplier__DOT__pp12[0U] = __Vtemp_49[0U];
        vlSelfRef.multiplier__DOT__pp12[1U] = __Vtemp_49[1U];
        vlSelfRef.multiplier__DOT__pp12[2U] = __Vtemp_49[2U];
        vlSelfRef.multiplier__DOT__pp12[3U] = __Vtemp_49[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp12[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp12[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp12[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp12[3U] = 0U;
    }
    __Vtemp_52[0U] = (IData)(vlSelfRef.a);
    __Vtemp_52[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_52[2U] = 0U;
    __Vtemp_52[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_53, __Vtemp_52, 0xdU);
    if ((1U & (IData)((vlSelfRef.b >> 0xdU)))) {
        vlSelfRef.multiplier__DOT__pp13[0U] = __Vtemp_53[0U];
        vlSelfRef.multiplier__DOT__pp13[1U] = __Vtemp_53[1U];
        vlSelfRef.multiplier__DOT__pp13[2U] = __Vtemp_53[2U];
        vlSelfRef.multiplier__DOT__pp13[3U] = __Vtemp_53[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp13[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp13[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp13[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp13[3U] = 0U;
    }
    __Vtemp_56[0U] = (IData)(vlSelfRef.a);
    __Vtemp_56[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_56[2U] = 0U;
    __Vtemp_56[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_57, __Vtemp_56, 0xeU);
    if ((1U & (IData)((vlSelfRef.b >> 0xeU)))) {
        vlSelfRef.multiplier__DOT__pp14[0U] = __Vtemp_57[0U];
        vlSelfRef.multiplier__DOT__pp14[1U] = __Vtemp_57[1U];
        vlSelfRef.multiplier__DOT__pp14[2U] = __Vtemp_57[2U];
        vlSelfRef.multiplier__DOT__pp14[3U] = __Vtemp_57[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp14[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp14[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp14[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp14[3U] = 0U;
    }
    __Vtemp_60[0U] = (IData)(vlSelfRef.a);
    __Vtemp_60[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_60[2U] = 0U;
    __Vtemp_60[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_61, __Vtemp_60, 0xfU);
    if ((1U & (IData)((vlSelfRef.b >> 0xfU)))) {
        vlSelfRef.multiplier__DOT__pp15[0U] = __Vtemp_61[0U];
        vlSelfRef.multiplier__DOT__pp15[1U] = __Vtemp_61[1U];
        vlSelfRef.multiplier__DOT__pp15[2U] = __Vtemp_61[2U];
        vlSelfRef.multiplier__DOT__pp15[3U] = __Vtemp_61[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp15[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp15[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp15[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp15[3U] = 0U;
    }
    __Vtemp_64[0U] = (IData)(vlSelfRef.a);
    __Vtemp_64[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_64[2U] = 0U;
    __Vtemp_64[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_65, __Vtemp_64, 0x10U);
    if ((1U & (IData)((vlSelfRef.b >> 0x10U)))) {
        vlSelfRef.multiplier__DOT__pp16[0U] = __Vtemp_65[0U];
        vlSelfRef.multiplier__DOT__pp16[1U] = __Vtemp_65[1U];
        vlSelfRef.multiplier__DOT__pp16[2U] = __Vtemp_65[2U];
        vlSelfRef.multiplier__DOT__pp16[3U] = __Vtemp_65[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp16[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp16[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp16[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp16[3U] = 0U;
    }
    __Vtemp_68[0U] = (IData)(vlSelfRef.a);
    __Vtemp_68[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_68[2U] = 0U;
    __Vtemp_68[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_69, __Vtemp_68, 0x11U);
    if ((1U & (IData)((vlSelfRef.b >> 0x11U)))) {
        vlSelfRef.multiplier__DOT__pp17[0U] = __Vtemp_69[0U];
        vlSelfRef.multiplier__DOT__pp17[1U] = __Vtemp_69[1U];
        vlSelfRef.multiplier__DOT__pp17[2U] = __Vtemp_69[2U];
        vlSelfRef.multiplier__DOT__pp17[3U] = __Vtemp_69[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp17[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp17[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp17[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp17[3U] = 0U;
    }
    __Vtemp_72[0U] = (IData)(vlSelfRef.a);
    __Vtemp_72[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_72[2U] = 0U;
    __Vtemp_72[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_73, __Vtemp_72, 0x12U);
    if ((1U & (IData)((vlSelfRef.b >> 0x12U)))) {
        vlSelfRef.multiplier__DOT__pp18[0U] = __Vtemp_73[0U];
        vlSelfRef.multiplier__DOT__pp18[1U] = __Vtemp_73[1U];
        vlSelfRef.multiplier__DOT__pp18[2U] = __Vtemp_73[2U];
        vlSelfRef.multiplier__DOT__pp18[3U] = __Vtemp_73[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp18[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp18[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp18[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp18[3U] = 0U;
    }
    __Vtemp_76[0U] = (IData)(vlSelfRef.a);
    __Vtemp_76[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_76[2U] = 0U;
    __Vtemp_76[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_77, __Vtemp_76, 0x13U);
    if ((1U & (IData)((vlSelfRef.b >> 0x13U)))) {
        vlSelfRef.multiplier__DOT__pp19[0U] = __Vtemp_77[0U];
        vlSelfRef.multiplier__DOT__pp19[1U] = __Vtemp_77[1U];
        vlSelfRef.multiplier__DOT__pp19[2U] = __Vtemp_77[2U];
        vlSelfRef.multiplier__DOT__pp19[3U] = __Vtemp_77[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp19[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp19[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp19[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp19[3U] = 0U;
    }
    __Vtemp_80[0U] = (IData)(vlSelfRef.a);
    __Vtemp_80[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_80[2U] = 0U;
    __Vtemp_80[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_81, __Vtemp_80, 0x14U);
    if ((1U & (IData)((vlSelfRef.b >> 0x14U)))) {
        vlSelfRef.multiplier__DOT__pp20[0U] = __Vtemp_81[0U];
        vlSelfRef.multiplier__DOT__pp20[1U] = __Vtemp_81[1U];
        vlSelfRef.multiplier__DOT__pp20[2U] = __Vtemp_81[2U];
        vlSelfRef.multiplier__DOT__pp20[3U] = __Vtemp_81[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp20[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp20[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp20[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp20[3U] = 0U;
    }
    __Vtemp_84[0U] = (IData)(vlSelfRef.a);
    __Vtemp_84[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_84[2U] = 0U;
    __Vtemp_84[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_85, __Vtemp_84, 0x15U);
    if ((1U & (IData)((vlSelfRef.b >> 0x15U)))) {
        vlSelfRef.multiplier__DOT__pp21[0U] = __Vtemp_85[0U];
        vlSelfRef.multiplier__DOT__pp21[1U] = __Vtemp_85[1U];
        vlSelfRef.multiplier__DOT__pp21[2U] = __Vtemp_85[2U];
        vlSelfRef.multiplier__DOT__pp21[3U] = __Vtemp_85[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp21[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp21[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp21[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp21[3U] = 0U;
    }
    __Vtemp_88[0U] = (IData)(vlSelfRef.a);
    __Vtemp_88[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_88[2U] = 0U;
    __Vtemp_88[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_89, __Vtemp_88, 0x16U);
    if ((1U & (IData)((vlSelfRef.b >> 0x16U)))) {
        vlSelfRef.multiplier__DOT__pp22[0U] = __Vtemp_89[0U];
        vlSelfRef.multiplier__DOT__pp22[1U] = __Vtemp_89[1U];
        vlSelfRef.multiplier__DOT__pp22[2U] = __Vtemp_89[2U];
        vlSelfRef.multiplier__DOT__pp22[3U] = __Vtemp_89[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp22[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp22[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp22[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp22[3U] = 0U;
    }
    __Vtemp_92[0U] = (IData)(vlSelfRef.a);
    __Vtemp_92[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_92[2U] = 0U;
    __Vtemp_92[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_93, __Vtemp_92, 0x17U);
    if ((1U & (IData)((vlSelfRef.b >> 0x17U)))) {
        vlSelfRef.multiplier__DOT__pp23[0U] = __Vtemp_93[0U];
        vlSelfRef.multiplier__DOT__pp23[1U] = __Vtemp_93[1U];
        vlSelfRef.multiplier__DOT__pp23[2U] = __Vtemp_93[2U];
        vlSelfRef.multiplier__DOT__pp23[3U] = __Vtemp_93[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp23[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp23[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp23[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp23[3U] = 0U;
    }
    __Vtemp_96[0U] = (IData)(vlSelfRef.a);
    __Vtemp_96[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_96[2U] = 0U;
    __Vtemp_96[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_97, __Vtemp_96, 0x18U);
    if ((1U & (IData)((vlSelfRef.b >> 0x18U)))) {
        vlSelfRef.multiplier__DOT__pp24[0U] = __Vtemp_97[0U];
        vlSelfRef.multiplier__DOT__pp24[1U] = __Vtemp_97[1U];
        vlSelfRef.multiplier__DOT__pp24[2U] = __Vtemp_97[2U];
        vlSelfRef.multiplier__DOT__pp24[3U] = __Vtemp_97[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp24[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp24[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp24[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp24[3U] = 0U;
    }
    __Vtemp_100[0U] = (IData)(vlSelfRef.a);
    __Vtemp_100[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_100[2U] = 0U;
    __Vtemp_100[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_101, __Vtemp_100, 0x19U);
    if ((1U & (IData)((vlSelfRef.b >> 0x19U)))) {
        vlSelfRef.multiplier__DOT__pp25[0U] = __Vtemp_101[0U];
        vlSelfRef.multiplier__DOT__pp25[1U] = __Vtemp_101[1U];
        vlSelfRef.multiplier__DOT__pp25[2U] = __Vtemp_101[2U];
        vlSelfRef.multiplier__DOT__pp25[3U] = __Vtemp_101[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp25[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp25[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp25[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp25[3U] = 0U;
    }
    __Vtemp_104[0U] = (IData)(vlSelfRef.a);
    __Vtemp_104[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_104[2U] = 0U;
    __Vtemp_104[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_105, __Vtemp_104, 0x1aU);
    if ((1U & (IData)((vlSelfRef.b >> 0x1aU)))) {
        vlSelfRef.multiplier__DOT__pp26[0U] = __Vtemp_105[0U];
        vlSelfRef.multiplier__DOT__pp26[1U] = __Vtemp_105[1U];
        vlSelfRef.multiplier__DOT__pp26[2U] = __Vtemp_105[2U];
        vlSelfRef.multiplier__DOT__pp26[3U] = __Vtemp_105[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp26[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp26[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp26[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp26[3U] = 0U;
    }
    __Vtemp_108[0U] = (IData)(vlSelfRef.a);
    __Vtemp_108[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_108[2U] = 0U;
    __Vtemp_108[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_109, __Vtemp_108, 0x1bU);
    if ((1U & (IData)((vlSelfRef.b >> 0x1bU)))) {
        vlSelfRef.multiplier__DOT__pp27[0U] = __Vtemp_109[0U];
        vlSelfRef.multiplier__DOT__pp27[1U] = __Vtemp_109[1U];
        vlSelfRef.multiplier__DOT__pp27[2U] = __Vtemp_109[2U];
        vlSelfRef.multiplier__DOT__pp27[3U] = __Vtemp_109[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp27[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp27[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp27[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp27[3U] = 0U;
    }
    __Vtemp_112[0U] = (IData)(vlSelfRef.a);
    __Vtemp_112[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_112[2U] = 0U;
    __Vtemp_112[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_113, __Vtemp_112, 0x1cU);
    if ((1U & (IData)((vlSelfRef.b >> 0x1cU)))) {
        vlSelfRef.multiplier__DOT__pp28[0U] = __Vtemp_113[0U];
        vlSelfRef.multiplier__DOT__pp28[1U] = __Vtemp_113[1U];
        vlSelfRef.multiplier__DOT__pp28[2U] = __Vtemp_113[2U];
        vlSelfRef.multiplier__DOT__pp28[3U] = __Vtemp_113[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp28[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp28[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp28[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp28[3U] = 0U;
    }
    __Vtemp_116[0U] = (IData)(vlSelfRef.a);
    __Vtemp_116[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_116[2U] = 0U;
    __Vtemp_116[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_117, __Vtemp_116, 0x1dU);
    if ((1U & (IData)((vlSelfRef.b >> 0x1dU)))) {
        vlSelfRef.multiplier__DOT__pp29[0U] = __Vtemp_117[0U];
        vlSelfRef.multiplier__DOT__pp29[1U] = __Vtemp_117[1U];
        vlSelfRef.multiplier__DOT__pp29[2U] = __Vtemp_117[2U];
        vlSelfRef.multiplier__DOT__pp29[3U] = __Vtemp_117[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp29[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp29[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp29[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp29[3U] = 0U;
    }
    __Vtemp_120[0U] = (IData)(vlSelfRef.a);
    __Vtemp_120[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_120[2U] = 0U;
    __Vtemp_120[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_121, __Vtemp_120, 0x1eU);
    if ((1U & (IData)((vlSelfRef.b >> 0x1eU)))) {
        vlSelfRef.multiplier__DOT__pp30[0U] = __Vtemp_121[0U];
        vlSelfRef.multiplier__DOT__pp30[1U] = __Vtemp_121[1U];
        vlSelfRef.multiplier__DOT__pp30[2U] = __Vtemp_121[2U];
        vlSelfRef.multiplier__DOT__pp30[3U] = __Vtemp_121[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp30[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp30[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp30[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp30[3U] = 0U;
    }
    __Vtemp_124[0U] = (IData)(vlSelfRef.a);
    __Vtemp_124[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_124[2U] = 0U;
    __Vtemp_124[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_125, __Vtemp_124, 0x1fU);
    if ((1U & (IData)((vlSelfRef.b >> 0x1fU)))) {
        vlSelfRef.multiplier__DOT__pp31[0U] = __Vtemp_125[0U];
        vlSelfRef.multiplier__DOT__pp31[1U] = __Vtemp_125[1U];
        vlSelfRef.multiplier__DOT__pp31[2U] = __Vtemp_125[2U];
        vlSelfRef.multiplier__DOT__pp31[3U] = __Vtemp_125[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp31[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp31[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp31[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp31[3U] = 0U;
    }
    __Vtemp_128[0U] = (IData)(vlSelfRef.a);
    __Vtemp_128[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_128[2U] = 0U;
    __Vtemp_128[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_129, __Vtemp_128, 0x20U);
    if ((1U & (IData)((vlSelfRef.b >> 0x20U)))) {
        vlSelfRef.multiplier__DOT__pp32[0U] = __Vtemp_129[0U];
        vlSelfRef.multiplier__DOT__pp32[1U] = __Vtemp_129[1U];
        vlSelfRef.multiplier__DOT__pp32[2U] = __Vtemp_129[2U];
        vlSelfRef.multiplier__DOT__pp32[3U] = __Vtemp_129[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp32[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp32[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp32[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp32[3U] = 0U;
    }
    __Vtemp_132[0U] = (IData)(vlSelfRef.a);
    __Vtemp_132[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_132[2U] = 0U;
    __Vtemp_132[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_133, __Vtemp_132, 0x21U);
    if ((1U & (IData)((vlSelfRef.b >> 0x21U)))) {
        vlSelfRef.multiplier__DOT__pp33[0U] = __Vtemp_133[0U];
        vlSelfRef.multiplier__DOT__pp33[1U] = __Vtemp_133[1U];
        vlSelfRef.multiplier__DOT__pp33[2U] = __Vtemp_133[2U];
        vlSelfRef.multiplier__DOT__pp33[3U] = __Vtemp_133[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp33[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp33[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp33[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp33[3U] = 0U;
    }
    __Vtemp_136[0U] = (IData)(vlSelfRef.a);
    __Vtemp_136[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_136[2U] = 0U;
    __Vtemp_136[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_137, __Vtemp_136, 0x22U);
    if ((1U & (IData)((vlSelfRef.b >> 0x22U)))) {
        vlSelfRef.multiplier__DOT__pp34[0U] = __Vtemp_137[0U];
        vlSelfRef.multiplier__DOT__pp34[1U] = __Vtemp_137[1U];
        vlSelfRef.multiplier__DOT__pp34[2U] = __Vtemp_137[2U];
        vlSelfRef.multiplier__DOT__pp34[3U] = __Vtemp_137[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp34[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp34[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp34[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp34[3U] = 0U;
    }
    __Vtemp_140[0U] = (IData)(vlSelfRef.a);
    __Vtemp_140[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_140[2U] = 0U;
    __Vtemp_140[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_141, __Vtemp_140, 0x23U);
    if ((1U & (IData)((vlSelfRef.b >> 0x23U)))) {
        vlSelfRef.multiplier__DOT__pp35[0U] = __Vtemp_141[0U];
        vlSelfRef.multiplier__DOT__pp35[1U] = __Vtemp_141[1U];
        vlSelfRef.multiplier__DOT__pp35[2U] = __Vtemp_141[2U];
        vlSelfRef.multiplier__DOT__pp35[3U] = __Vtemp_141[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp35[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp35[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp35[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp35[3U] = 0U;
    }
    __Vtemp_144[0U] = (IData)(vlSelfRef.a);
    __Vtemp_144[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_144[2U] = 0U;
    __Vtemp_144[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_145, __Vtemp_144, 0x24U);
    if ((1U & (IData)((vlSelfRef.b >> 0x24U)))) {
        vlSelfRef.multiplier__DOT__pp36[0U] = __Vtemp_145[0U];
        vlSelfRef.multiplier__DOT__pp36[1U] = __Vtemp_145[1U];
        vlSelfRef.multiplier__DOT__pp36[2U] = __Vtemp_145[2U];
        vlSelfRef.multiplier__DOT__pp36[3U] = __Vtemp_145[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp36[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp36[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp36[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp36[3U] = 0U;
    }
    __Vtemp_148[0U] = (IData)(vlSelfRef.a);
    __Vtemp_148[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_148[2U] = 0U;
    __Vtemp_148[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_149, __Vtemp_148, 0x25U);
    if ((1U & (IData)((vlSelfRef.b >> 0x25U)))) {
        vlSelfRef.multiplier__DOT__pp37[0U] = __Vtemp_149[0U];
        vlSelfRef.multiplier__DOT__pp37[1U] = __Vtemp_149[1U];
        vlSelfRef.multiplier__DOT__pp37[2U] = __Vtemp_149[2U];
        vlSelfRef.multiplier__DOT__pp37[3U] = __Vtemp_149[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp37[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp37[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp37[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp37[3U] = 0U;
    }
    __Vtemp_152[0U] = (IData)(vlSelfRef.a);
    __Vtemp_152[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_152[2U] = 0U;
    __Vtemp_152[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_153, __Vtemp_152, 0x26U);
    if ((1U & (IData)((vlSelfRef.b >> 0x26U)))) {
        vlSelfRef.multiplier__DOT__pp38[0U] = __Vtemp_153[0U];
        vlSelfRef.multiplier__DOT__pp38[1U] = __Vtemp_153[1U];
        vlSelfRef.multiplier__DOT__pp38[2U] = __Vtemp_153[2U];
        vlSelfRef.multiplier__DOT__pp38[3U] = __Vtemp_153[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp38[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp38[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp38[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp38[3U] = 0U;
    }
    __Vtemp_156[0U] = (IData)(vlSelfRef.a);
    __Vtemp_156[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_156[2U] = 0U;
    __Vtemp_156[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_157, __Vtemp_156, 0x27U);
    if ((1U & (IData)((vlSelfRef.b >> 0x27U)))) {
        vlSelfRef.multiplier__DOT__pp39[0U] = __Vtemp_157[0U];
        vlSelfRef.multiplier__DOT__pp39[1U] = __Vtemp_157[1U];
        vlSelfRef.multiplier__DOT__pp39[2U] = __Vtemp_157[2U];
        vlSelfRef.multiplier__DOT__pp39[3U] = __Vtemp_157[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp39[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp39[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp39[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp39[3U] = 0U;
    }
    __Vtemp_160[0U] = (IData)(vlSelfRef.a);
    __Vtemp_160[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_160[2U] = 0U;
    __Vtemp_160[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_161, __Vtemp_160, 0x28U);
    if ((1U & (IData)((vlSelfRef.b >> 0x28U)))) {
        vlSelfRef.multiplier__DOT__pp40[0U] = __Vtemp_161[0U];
        vlSelfRef.multiplier__DOT__pp40[1U] = __Vtemp_161[1U];
        vlSelfRef.multiplier__DOT__pp40[2U] = __Vtemp_161[2U];
        vlSelfRef.multiplier__DOT__pp40[3U] = __Vtemp_161[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp40[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp40[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp40[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp40[3U] = 0U;
    }
    __Vtemp_164[0U] = (IData)(vlSelfRef.a);
    __Vtemp_164[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_164[2U] = 0U;
    __Vtemp_164[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_165, __Vtemp_164, 0x29U);
    if ((1U & (IData)((vlSelfRef.b >> 0x29U)))) {
        vlSelfRef.multiplier__DOT__pp41[0U] = __Vtemp_165[0U];
        vlSelfRef.multiplier__DOT__pp41[1U] = __Vtemp_165[1U];
        vlSelfRef.multiplier__DOT__pp41[2U] = __Vtemp_165[2U];
        vlSelfRef.multiplier__DOT__pp41[3U] = __Vtemp_165[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp41[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp41[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp41[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp41[3U] = 0U;
    }
    __Vtemp_168[0U] = (IData)(vlSelfRef.a);
    __Vtemp_168[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_168[2U] = 0U;
    __Vtemp_168[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_169, __Vtemp_168, 0x2aU);
    if ((1U & (IData)((vlSelfRef.b >> 0x2aU)))) {
        vlSelfRef.multiplier__DOT__pp42[0U] = __Vtemp_169[0U];
        vlSelfRef.multiplier__DOT__pp42[1U] = __Vtemp_169[1U];
        vlSelfRef.multiplier__DOT__pp42[2U] = __Vtemp_169[2U];
        vlSelfRef.multiplier__DOT__pp42[3U] = __Vtemp_169[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp42[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp42[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp42[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp42[3U] = 0U;
    }
    __Vtemp_172[0U] = (IData)(vlSelfRef.a);
    __Vtemp_172[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_172[2U] = 0U;
    __Vtemp_172[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_173, __Vtemp_172, 0x2bU);
    if ((1U & (IData)((vlSelfRef.b >> 0x2bU)))) {
        vlSelfRef.multiplier__DOT__pp43[0U] = __Vtemp_173[0U];
        vlSelfRef.multiplier__DOT__pp43[1U] = __Vtemp_173[1U];
        vlSelfRef.multiplier__DOT__pp43[2U] = __Vtemp_173[2U];
        vlSelfRef.multiplier__DOT__pp43[3U] = __Vtemp_173[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp43[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp43[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp43[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp43[3U] = 0U;
    }
    __Vtemp_176[0U] = (IData)(vlSelfRef.a);
    __Vtemp_176[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_176[2U] = 0U;
    __Vtemp_176[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_177, __Vtemp_176, 0x2cU);
    if ((1U & (IData)((vlSelfRef.b >> 0x2cU)))) {
        vlSelfRef.multiplier__DOT__pp44[0U] = __Vtemp_177[0U];
        vlSelfRef.multiplier__DOT__pp44[1U] = __Vtemp_177[1U];
        vlSelfRef.multiplier__DOT__pp44[2U] = __Vtemp_177[2U];
        vlSelfRef.multiplier__DOT__pp44[3U] = __Vtemp_177[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp44[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp44[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp44[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp44[3U] = 0U;
    }
    __Vtemp_180[0U] = (IData)(vlSelfRef.a);
    __Vtemp_180[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_180[2U] = 0U;
    __Vtemp_180[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_181, __Vtemp_180, 0x2dU);
    if ((1U & (IData)((vlSelfRef.b >> 0x2dU)))) {
        vlSelfRef.multiplier__DOT__pp45[0U] = __Vtemp_181[0U];
        vlSelfRef.multiplier__DOT__pp45[1U] = __Vtemp_181[1U];
        vlSelfRef.multiplier__DOT__pp45[2U] = __Vtemp_181[2U];
        vlSelfRef.multiplier__DOT__pp45[3U] = __Vtemp_181[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp45[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp45[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp45[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp45[3U] = 0U;
    }
    __Vtemp_184[0U] = (IData)(vlSelfRef.a);
    __Vtemp_184[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_184[2U] = 0U;
    __Vtemp_184[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_185, __Vtemp_184, 0x2eU);
    if ((1U & (IData)((vlSelfRef.b >> 0x2eU)))) {
        vlSelfRef.multiplier__DOT__pp46[0U] = __Vtemp_185[0U];
        vlSelfRef.multiplier__DOT__pp46[1U] = __Vtemp_185[1U];
        vlSelfRef.multiplier__DOT__pp46[2U] = __Vtemp_185[2U];
        vlSelfRef.multiplier__DOT__pp46[3U] = __Vtemp_185[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp46[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp46[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp46[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp46[3U] = 0U;
    }
    __Vtemp_188[0U] = (IData)(vlSelfRef.a);
    __Vtemp_188[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_188[2U] = 0U;
    __Vtemp_188[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_189, __Vtemp_188, 0x2fU);
    if ((1U & (IData)((vlSelfRef.b >> 0x2fU)))) {
        vlSelfRef.multiplier__DOT__pp47[0U] = __Vtemp_189[0U];
        vlSelfRef.multiplier__DOT__pp47[1U] = __Vtemp_189[1U];
        vlSelfRef.multiplier__DOT__pp47[2U] = __Vtemp_189[2U];
        vlSelfRef.multiplier__DOT__pp47[3U] = __Vtemp_189[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp47[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp47[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp47[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp47[3U] = 0U;
    }
    __Vtemp_192[0U] = (IData)(vlSelfRef.a);
    __Vtemp_192[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_192[2U] = 0U;
    __Vtemp_192[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_193, __Vtemp_192, 0x30U);
    if ((1U & (IData)((vlSelfRef.b >> 0x30U)))) {
        vlSelfRef.multiplier__DOT__pp48[0U] = __Vtemp_193[0U];
        vlSelfRef.multiplier__DOT__pp48[1U] = __Vtemp_193[1U];
        vlSelfRef.multiplier__DOT__pp48[2U] = __Vtemp_193[2U];
        vlSelfRef.multiplier__DOT__pp48[3U] = __Vtemp_193[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp48[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp48[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp48[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp48[3U] = 0U;
    }
    __Vtemp_196[0U] = (IData)(vlSelfRef.a);
    __Vtemp_196[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_196[2U] = 0U;
    __Vtemp_196[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_197, __Vtemp_196, 0x31U);
    if ((1U & (IData)((vlSelfRef.b >> 0x31U)))) {
        vlSelfRef.multiplier__DOT__pp49[0U] = __Vtemp_197[0U];
        vlSelfRef.multiplier__DOT__pp49[1U] = __Vtemp_197[1U];
        vlSelfRef.multiplier__DOT__pp49[2U] = __Vtemp_197[2U];
        vlSelfRef.multiplier__DOT__pp49[3U] = __Vtemp_197[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp49[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp49[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp49[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp49[3U] = 0U;
    }
    __Vtemp_200[0U] = (IData)(vlSelfRef.a);
    __Vtemp_200[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_200[2U] = 0U;
    __Vtemp_200[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_201, __Vtemp_200, 0x32U);
    if ((1U & (IData)((vlSelfRef.b >> 0x32U)))) {
        vlSelfRef.multiplier__DOT__pp50[0U] = __Vtemp_201[0U];
        vlSelfRef.multiplier__DOT__pp50[1U] = __Vtemp_201[1U];
        vlSelfRef.multiplier__DOT__pp50[2U] = __Vtemp_201[2U];
        vlSelfRef.multiplier__DOT__pp50[3U] = __Vtemp_201[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp50[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp50[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp50[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp50[3U] = 0U;
    }
    __Vtemp_204[0U] = (IData)(vlSelfRef.a);
    __Vtemp_204[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_204[2U] = 0U;
    __Vtemp_204[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_205, __Vtemp_204, 0x33U);
    if ((1U & (IData)((vlSelfRef.b >> 0x33U)))) {
        vlSelfRef.multiplier__DOT__pp51[0U] = __Vtemp_205[0U];
        vlSelfRef.multiplier__DOT__pp51[1U] = __Vtemp_205[1U];
        vlSelfRef.multiplier__DOT__pp51[2U] = __Vtemp_205[2U];
        vlSelfRef.multiplier__DOT__pp51[3U] = __Vtemp_205[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp51[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp51[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp51[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp51[3U] = 0U;
    }
    __Vtemp_208[0U] = (IData)(vlSelfRef.a);
    __Vtemp_208[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_208[2U] = 0U;
    __Vtemp_208[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_209, __Vtemp_208, 0x34U);
    if ((1U & (IData)((vlSelfRef.b >> 0x34U)))) {
        vlSelfRef.multiplier__DOT__pp52[0U] = __Vtemp_209[0U];
        vlSelfRef.multiplier__DOT__pp52[1U] = __Vtemp_209[1U];
        vlSelfRef.multiplier__DOT__pp52[2U] = __Vtemp_209[2U];
        vlSelfRef.multiplier__DOT__pp52[3U] = __Vtemp_209[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp52[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp52[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp52[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp52[3U] = 0U;
    }
    __Vtemp_212[0U] = (IData)(vlSelfRef.a);
    __Vtemp_212[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_212[2U] = 0U;
    __Vtemp_212[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_213, __Vtemp_212, 0x35U);
    if ((1U & (IData)((vlSelfRef.b >> 0x35U)))) {
        vlSelfRef.multiplier__DOT__pp53[0U] = __Vtemp_213[0U];
        vlSelfRef.multiplier__DOT__pp53[1U] = __Vtemp_213[1U];
        vlSelfRef.multiplier__DOT__pp53[2U] = __Vtemp_213[2U];
        vlSelfRef.multiplier__DOT__pp53[3U] = __Vtemp_213[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp53[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp53[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp53[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp53[3U] = 0U;
    }
    __Vtemp_216[0U] = (IData)(vlSelfRef.a);
    __Vtemp_216[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_216[2U] = 0U;
    __Vtemp_216[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_217, __Vtemp_216, 0x36U);
    if ((1U & (IData)((vlSelfRef.b >> 0x36U)))) {
        vlSelfRef.multiplier__DOT__pp54[0U] = __Vtemp_217[0U];
        vlSelfRef.multiplier__DOT__pp54[1U] = __Vtemp_217[1U];
        vlSelfRef.multiplier__DOT__pp54[2U] = __Vtemp_217[2U];
        vlSelfRef.multiplier__DOT__pp54[3U] = __Vtemp_217[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp54[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp54[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp54[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp54[3U] = 0U;
    }
    __Vtemp_220[0U] = (IData)(vlSelfRef.a);
    __Vtemp_220[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_220[2U] = 0U;
    __Vtemp_220[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_221, __Vtemp_220, 0x37U);
    if ((1U & (IData)((vlSelfRef.b >> 0x37U)))) {
        vlSelfRef.multiplier__DOT__pp55[0U] = __Vtemp_221[0U];
        vlSelfRef.multiplier__DOT__pp55[1U] = __Vtemp_221[1U];
        vlSelfRef.multiplier__DOT__pp55[2U] = __Vtemp_221[2U];
        vlSelfRef.multiplier__DOT__pp55[3U] = __Vtemp_221[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp55[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp55[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp55[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp55[3U] = 0U;
    }
    __Vtemp_224[0U] = (IData)(vlSelfRef.a);
    __Vtemp_224[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_224[2U] = 0U;
    __Vtemp_224[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_225, __Vtemp_224, 0x38U);
    if ((1U & (IData)((vlSelfRef.b >> 0x38U)))) {
        vlSelfRef.multiplier__DOT__pp56[0U] = __Vtemp_225[0U];
        vlSelfRef.multiplier__DOT__pp56[1U] = __Vtemp_225[1U];
        vlSelfRef.multiplier__DOT__pp56[2U] = __Vtemp_225[2U];
        vlSelfRef.multiplier__DOT__pp56[3U] = __Vtemp_225[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp56[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp56[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp56[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp56[3U] = 0U;
    }
    __Vtemp_228[0U] = (IData)(vlSelfRef.a);
    __Vtemp_228[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_228[2U] = 0U;
    __Vtemp_228[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_229, __Vtemp_228, 0x39U);
    if ((1U & (IData)((vlSelfRef.b >> 0x39U)))) {
        vlSelfRef.multiplier__DOT__pp57[0U] = __Vtemp_229[0U];
        vlSelfRef.multiplier__DOT__pp57[1U] = __Vtemp_229[1U];
        vlSelfRef.multiplier__DOT__pp57[2U] = __Vtemp_229[2U];
        vlSelfRef.multiplier__DOT__pp57[3U] = __Vtemp_229[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp57[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp57[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp57[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp57[3U] = 0U;
    }
    __Vtemp_232[0U] = (IData)(vlSelfRef.a);
    __Vtemp_232[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_232[2U] = 0U;
    __Vtemp_232[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_233, __Vtemp_232, 0x3aU);
    if ((1U & (IData)((vlSelfRef.b >> 0x3aU)))) {
        vlSelfRef.multiplier__DOT__pp58[0U] = __Vtemp_233[0U];
        vlSelfRef.multiplier__DOT__pp58[1U] = __Vtemp_233[1U];
        vlSelfRef.multiplier__DOT__pp58[2U] = __Vtemp_233[2U];
        vlSelfRef.multiplier__DOT__pp58[3U] = __Vtemp_233[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp58[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp58[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp58[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp58[3U] = 0U;
    }
    __Vtemp_236[0U] = (IData)(vlSelfRef.a);
    __Vtemp_236[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_236[2U] = 0U;
    __Vtemp_236[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_237, __Vtemp_236, 0x3bU);
    if ((1U & (IData)((vlSelfRef.b >> 0x3bU)))) {
        vlSelfRef.multiplier__DOT__pp59[0U] = __Vtemp_237[0U];
        vlSelfRef.multiplier__DOT__pp59[1U] = __Vtemp_237[1U];
        vlSelfRef.multiplier__DOT__pp59[2U] = __Vtemp_237[2U];
        vlSelfRef.multiplier__DOT__pp59[3U] = __Vtemp_237[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp59[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp59[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp59[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp59[3U] = 0U;
    }
    __Vtemp_240[0U] = (IData)(vlSelfRef.a);
    __Vtemp_240[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_240[2U] = 0U;
    __Vtemp_240[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_241, __Vtemp_240, 0x3cU);
    if ((1U & (IData)((vlSelfRef.b >> 0x3cU)))) {
        vlSelfRef.multiplier__DOT__pp60[0U] = __Vtemp_241[0U];
        vlSelfRef.multiplier__DOT__pp60[1U] = __Vtemp_241[1U];
        vlSelfRef.multiplier__DOT__pp60[2U] = __Vtemp_241[2U];
        vlSelfRef.multiplier__DOT__pp60[3U] = __Vtemp_241[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp60[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp60[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp60[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp60[3U] = 0U;
    }
    __Vtemp_244[0U] = (IData)(vlSelfRef.a);
    __Vtemp_244[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_244[2U] = 0U;
    __Vtemp_244[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_245, __Vtemp_244, 0x3dU);
    if ((1U & (IData)((vlSelfRef.b >> 0x3dU)))) {
        vlSelfRef.multiplier__DOT__pp61[0U] = __Vtemp_245[0U];
        vlSelfRef.multiplier__DOT__pp61[1U] = __Vtemp_245[1U];
        vlSelfRef.multiplier__DOT__pp61[2U] = __Vtemp_245[2U];
        vlSelfRef.multiplier__DOT__pp61[3U] = __Vtemp_245[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp61[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp61[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp61[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp61[3U] = 0U;
    }
    __Vtemp_248[0U] = (IData)(vlSelfRef.a);
    __Vtemp_248[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_248[2U] = 0U;
    __Vtemp_248[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_249, __Vtemp_248, 0x3eU);
    if ((1U & (IData)((vlSelfRef.b >> 0x3eU)))) {
        vlSelfRef.multiplier__DOT__pp62[0U] = __Vtemp_249[0U];
        vlSelfRef.multiplier__DOT__pp62[1U] = __Vtemp_249[1U];
        vlSelfRef.multiplier__DOT__pp62[2U] = __Vtemp_249[2U];
        vlSelfRef.multiplier__DOT__pp62[3U] = __Vtemp_249[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp62[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp62[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp62[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp62[3U] = 0U;
    }
    __Vtemp_252[0U] = (IData)(vlSelfRef.a);
    __Vtemp_252[1U] = (IData)((vlSelfRef.a >> 0x20U));
    __Vtemp_252[2U] = 0U;
    __Vtemp_252[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_253, __Vtemp_252, 0x3fU);
    if ((1U & (IData)((vlSelfRef.b >> 0x3fU)))) {
        vlSelfRef.multiplier__DOT__pp63[0U] = __Vtemp_253[0U];
        vlSelfRef.multiplier__DOT__pp63[1U] = __Vtemp_253[1U];
        vlSelfRef.multiplier__DOT__pp63[2U] = __Vtemp_253[2U];
        vlSelfRef.multiplier__DOT__pp63[3U] = __Vtemp_253[3U];
    } else {
        vlSelfRef.multiplier__DOT__pp63[0U] = 0U;
        vlSelfRef.multiplier__DOT__pp63[1U] = 0U;
        vlSelfRef.multiplier__DOT__pp63[2U] = 0U;
        vlSelfRef.multiplier__DOT__pp63[3U] = 0U;
    }
    vlSelfRef.multiplier__DOT__A0__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp0[0U];
    vlSelfRef.multiplier__DOT__A0__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp0[1U];
    vlSelfRef.multiplier__DOT__A0__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp0[2U];
    vlSelfRef.multiplier__DOT__A0__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp0[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp0[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp0[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp0[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp0[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp0[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp0[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp0[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp0[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp0[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp0[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp0[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp0[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp0[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp0[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp0[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp0[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp0[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp0[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp0[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp0[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp0[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp0[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp0[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp0[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp0[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp0[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp0[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp0[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp0[3U]));
    }
    vlSelfRef.multiplier__DOT__A0__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp1[0U];
    vlSelfRef.multiplier__DOT__A0__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp1[1U];
    vlSelfRef.multiplier__DOT__A0__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp1[2U];
    vlSelfRef.multiplier__DOT__A0__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp1[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp1[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp1[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp1[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp1[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp1[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp1[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp1[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp1[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp1[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp1[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp1[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp1[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp1[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp1[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp1[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp1[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp1[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp1[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp1[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp1[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp1[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp1[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp1[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp1[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp1[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp1[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp1[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp1[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp1[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A0__DOT__sum, vlSelfRef.multiplier__DOT__pp0, vlSelfRef.multiplier__DOT__pp1);
    vlSelfRef.multiplier__DOT__A1__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp2[0U];
    vlSelfRef.multiplier__DOT__A1__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp2[1U];
    vlSelfRef.multiplier__DOT__A1__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp2[2U];
    vlSelfRef.multiplier__DOT__A1__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp2[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp2[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp2[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp2[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp2[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp2[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp2[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp2[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp2[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp2[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp2[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp2[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp2[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp2[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp2[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp2[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp2[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp2[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp2[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp2[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp2[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp2[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp2[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp2[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp2[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp2[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp2[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp2[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp2[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp2[3U]));
    }
    vlSelfRef.multiplier__DOT__A1__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp3[0U];
    vlSelfRef.multiplier__DOT__A1__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp3[1U];
    vlSelfRef.multiplier__DOT__A1__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp3[2U];
    vlSelfRef.multiplier__DOT__A1__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp3[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp3[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp3[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp3[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp3[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp3[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp3[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp3[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp3[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp3[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp3[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp3[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp3[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp3[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp3[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp3[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp3[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp3[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp3[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp3[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp3[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp3[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp3[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp3[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp3[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp3[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp3[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp3[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp3[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp3[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A1__DOT__sum, vlSelfRef.multiplier__DOT__pp2, vlSelfRef.multiplier__DOT__pp3);
    vlSelfRef.multiplier__DOT__A2__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp4[0U];
    vlSelfRef.multiplier__DOT__A2__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp4[1U];
    vlSelfRef.multiplier__DOT__A2__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp4[2U];
    vlSelfRef.multiplier__DOT__A2__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp4[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp4[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp4[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp4[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp4[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp4[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp4[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp4[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp4[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp4[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp4[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp4[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp4[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp4[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp4[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp4[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp4[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp4[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp4[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp4[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp4[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp4[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp4[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp4[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp4[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp4[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp4[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp4[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp4[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp4[3U]));
    }
    vlSelfRef.multiplier__DOT__A2__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp5[0U];
    vlSelfRef.multiplier__DOT__A2__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp5[1U];
    vlSelfRef.multiplier__DOT__A2__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp5[2U];
    vlSelfRef.multiplier__DOT__A2__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp5[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp5[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp5[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp5[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp5[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp5[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp5[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp5[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp5[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp5[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp5[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp5[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp5[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp5[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp5[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp5[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp5[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp5[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp5[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp5[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp5[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp5[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp5[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp5[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp5[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp5[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp5[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp5[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp5[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp5[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A2__DOT__sum, vlSelfRef.multiplier__DOT__pp4, vlSelfRef.multiplier__DOT__pp5);
    vlSelfRef.multiplier__DOT__A3__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp6[0U];
    vlSelfRef.multiplier__DOT__A3__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp6[1U];
    vlSelfRef.multiplier__DOT__A3__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp6[2U];
    vlSelfRef.multiplier__DOT__A3__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp6[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp6[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp6[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp6[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp6[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp6[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp6[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp6[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp6[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp6[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp6[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp6[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp6[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp6[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp6[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp6[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp6[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp6[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp6[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp6[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp6[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp6[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp6[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp6[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp6[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp6[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp6[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp6[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp6[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp6[3U]));
    }
    vlSelfRef.multiplier__DOT__A3__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp7[0U];
    vlSelfRef.multiplier__DOT__A3__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp7[1U];
    vlSelfRef.multiplier__DOT__A3__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp7[2U];
    vlSelfRef.multiplier__DOT__A3__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp7[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp7[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp7[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp7[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp7[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp7[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp7[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp7[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp7[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp7[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp7[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp7[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp7[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp7[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp7[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp7[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp7[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp7[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp7[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp7[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp7[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp7[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp7[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp7[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp7[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp7[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp7[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp7[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp7[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp7[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A3__DOT__sum, vlSelfRef.multiplier__DOT__pp6, vlSelfRef.multiplier__DOT__pp7);
    vlSelfRef.multiplier__DOT__A4__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp8[0U];
    vlSelfRef.multiplier__DOT__A4__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp8[1U];
    vlSelfRef.multiplier__DOT__A4__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp8[2U];
    vlSelfRef.multiplier__DOT__A4__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp8[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp8[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp8[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp8[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp8[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp8[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp8[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp8[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp8[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp8[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp8[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp8[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp8[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp8[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp8[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp8[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp8[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp8[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp8[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp8[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp8[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp8[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp8[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp8[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp8[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp8[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp8[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp8[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp8[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp8[3U]));
    }
    vlSelfRef.multiplier__DOT__A4__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp9[0U];
    vlSelfRef.multiplier__DOT__A4__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp9[1U];
    vlSelfRef.multiplier__DOT__A4__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp9[2U];
    vlSelfRef.multiplier__DOT__A4__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp9[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp9[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp9[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp9[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp9[0U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp9[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp9[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp9[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp9[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp9[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp9[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp9[1U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp9[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp9[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp9[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp9[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp9[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp9[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp9[2U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp9[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp9[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp9[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp9[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp9[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp9[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp9[3U] ^ 
               vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp9[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp9[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp9[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp9[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A4__DOT__sum, vlSelfRef.multiplier__DOT__pp8, vlSelfRef.multiplier__DOT__pp9);
    vlSelfRef.multiplier__DOT__A5__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp10[0U];
    vlSelfRef.multiplier__DOT__A5__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp10[1U];
    vlSelfRef.multiplier__DOT__A5__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp10[2U];
    vlSelfRef.multiplier__DOT__A5__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp10[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp10[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp10[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp10[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp10[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp10[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp10[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp10[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp10[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp10[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp10[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp10[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp10[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp10[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp10[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp10[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp10[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp10[3U]));
    }
    vlSelfRef.multiplier__DOT__A5__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp11[0U];
    vlSelfRef.multiplier__DOT__A5__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp11[1U];
    vlSelfRef.multiplier__DOT__A5__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp11[2U];
    vlSelfRef.multiplier__DOT__A5__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp11[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp11[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp11[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp11[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp11[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp11[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp11[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp11[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp11[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp11[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp11[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp11[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp11[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp11[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp11[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp11[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp11[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp11[3U]));
    }
    VL_ADD_W(4, vlSelfRef.multiplier__DOT__A5__DOT__sum, vlSelfRef.multiplier__DOT__pp10, vlSelfRef.multiplier__DOT__pp11);
    vlSelfRef.multiplier__DOT__A6__DOT__a[0U] = vlSelfRef.multiplier__DOT__pp12[0U];
    vlSelfRef.multiplier__DOT__A6__DOT__a[1U] = vlSelfRef.multiplier__DOT__pp12[1U];
    vlSelfRef.multiplier__DOT__A6__DOT__a[2U] = vlSelfRef.multiplier__DOT__pp12[2U];
    vlSelfRef.multiplier__DOT__A6__DOT__a[3U] = vlSelfRef.multiplier__DOT__pp12[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp12[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1817]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1818]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1819]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1821]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp12[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]))) {
        ++(vlSymsp->__Vcoverage[1822]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp12[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp12[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp12[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp12[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp12[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp12[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp12[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp12[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp12[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp12[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp12[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp12[3U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp12[3U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp12[3U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp12[3U]));
    }
    vlSelfRef.multiplier__DOT__A6__DOT__b[0U] = vlSelfRef.multiplier__DOT__pp13[0U];
    vlSelfRef.multiplier__DOT__A6__DOT__b[1U] = vlSelfRef.multiplier__DOT__pp13[1U];
    vlSelfRef.multiplier__DOT__A6__DOT__b[2U] = vlSelfRef.multiplier__DOT__pp13[2U];
    vlSelfRef.multiplier__DOT__A6__DOT__b[3U] = vlSelfRef.multiplier__DOT__pp13[3U];
    if ((1U & (vlSelfRef.multiplier__DOT__pp13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp13[0U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp13[0U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp13[0U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[0U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp13[0U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp13[1U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp13[1U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp13[1U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[1U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp13[1U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp13[2U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x10000000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xefffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x10000000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x20000000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xdfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x20000000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((0x40000000U & (vlSelfRef.multiplier__DOT__pp13[2U] 
                        ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0xbfffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x40000000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if (((vlSelfRef.multiplier__DOT__pp13[2U] ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U] 
            = ((0x7fffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[2U]) 
               | (0x80000000U & vlSelfRef.multiplier__DOT__pp13[2U]));
    }
    if ((1U & (vlSelfRef.multiplier__DOT__pp13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffffffeU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (1U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((2U & (vlSelfRef.multiplier__DOT__pp13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffffffdU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (2U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((4U & (vlSelfRef.multiplier__DOT__pp13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffffffbU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (4U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((8U & (vlSelfRef.multiplier__DOT__pp13[3U] 
               ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffffff7U & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (8U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x10U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffffffefU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x10U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x20U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffffffdfU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x20U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x40U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffffffbfU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x40U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x80U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                  ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffffff7fU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x80U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x100U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffffeffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x100U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x200U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffffdffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x200U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x400U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffffbffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x400U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x800U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                   ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffff7ffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x800U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x1000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffffefffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x1000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x2000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffffdfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x2000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x4000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffffbfffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x4000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x8000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                    ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffff7fffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x8000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x10000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffeffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x10000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x20000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffdffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x20000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x40000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfffbffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x40000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x80000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                     ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfff7ffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x80000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x100000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffefffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x100000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x200000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffdfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x200000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x400000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xffbfffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x400000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x800000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                      ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xff7fffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x800000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x1000000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfeffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x1000000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x2000000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfdffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x2000000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x4000000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xfbffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x4000000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
    if ((0x8000000U & (vlSelfRef.multiplier__DOT__pp13[3U] 
                       ^ vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U] 
            = ((0xf7ffffffU & vlSelfRef.multiplier__DOT____Vtogcov__pp13[3U]) 
               | (0x8000000U & vlSelfRef.multiplier__DOT__pp13[3U]));
    }
}

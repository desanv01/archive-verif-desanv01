// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/vsysuser/workspace/verif-desanv01/multiplier/multiplier64_tree.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___ico_sequent__TOP__12(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
        Vtop___024root___ico_sequent__TOP__2(vlSelf);
        Vtop___024root___ico_sequent__TOP__3(vlSelf);
        Vtop___024root___ico_sequent__TOP__4(vlSelf);
        Vtop___024root___ico_sequent__TOP__5(vlSelf);
        Vtop___024root___ico_sequent__TOP__6(vlSelf);
        Vtop___024root___ico_sequent__TOP__7(vlSelf);
        Vtop___024root___ico_sequent__TOP__8(vlSelf);
        Vtop___024root___ico_sequent__TOP__9(vlSelf);
        Vtop___024root___ico_sequent__TOP__10(vlSelf);
        Vtop___024root___ico_sequent__TOP__11(vlSelf);
        Vtop___024root___ico_sequent__TOP__12(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = 0;
    vlSelf->b = 0;
    VL_ZERO_RESET_W(128, vlSelf->product);
    vlSelf->multiplier__DOT__a = 0;
    vlSelf->multiplier__DOT__b = 0;
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__product);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp4);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp5);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp6);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp7);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp8);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp9);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp10);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp11);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp12);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp13);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp14);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp15);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp16);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp17);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp18);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp19);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp20);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp21);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp22);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp23);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp24);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp25);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp26);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp27);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp28);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp29);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp30);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp31);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp32);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp33);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp34);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp35);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp36);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp37);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp38);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp39);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp40);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp41);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp42);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp43);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp44);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp45);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp46);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp47);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp48);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp49);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp50);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp51);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp52);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp53);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp54);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp55);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp56);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp57);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp58);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp59);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp60);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp61);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp62);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__pp63);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_4);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_5);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_6);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_7);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_8);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_9);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_10);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_11);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_12);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_13);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_14);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_15);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_16);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_17);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_18);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_19);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_20);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_21);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_22);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_23);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_24);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_25);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_26);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_27);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_28);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_29);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_30);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l0_31);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_4);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_5);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_6);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_7);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_8);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_9);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_10);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_11);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_12);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_13);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_14);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l1_15);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l2_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l2_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l2_2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l2_3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l2_4);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l2_5);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l2_6);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l2_7);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l3_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l3_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l3_2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l3_3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l4_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l4_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__l5_0);
    vlSelf->multiplier__DOT____Vtogcov__a = 0;
    vlSelf->multiplier__DOT____Vtogcov__b = 0;
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__product);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp4);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp5);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp6);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp7);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp8);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp9);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp10);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp11);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp12);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp13);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp14);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp15);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp16);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp17);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp18);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp19);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp20);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp21);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp22);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp23);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp24);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp25);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp26);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp27);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp28);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp29);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp30);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp31);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp32);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp33);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp34);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp35);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp36);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp37);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp38);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp39);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp40);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp41);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp42);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp43);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp44);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp45);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp46);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp47);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp48);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp49);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp50);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp51);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp52);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp53);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp54);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp55);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp56);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp57);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp58);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp59);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp60);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp61);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp62);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__pp63);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_4);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_5);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_6);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_7);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_8);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_9);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_10);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_11);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_12);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_13);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_14);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_15);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_16);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_17);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_18);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_19);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_20);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_21);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_22);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_23);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_24);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_25);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_26);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_27);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_28);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_29);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_30);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l0_31);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_4);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_5);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_6);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_7);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_8);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_9);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_10);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_11);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_12);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_13);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_14);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l1_15);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l2_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l2_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l2_2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l2_3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l2_4);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l2_5);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l2_6);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l2_7);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l3_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l3_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l3_2);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l3_3);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l4_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l4_1);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT____Vtogcov__l5_0);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A0__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A0__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A0__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A0__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A1__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A1__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A1__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A1__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A2__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A2__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A2__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A2__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A3__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A3__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A3__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A3__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A4__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A4__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A4__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A4__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A5__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A5__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A5__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A5__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A6__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A6__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A6__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A6__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A7__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A7__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A7__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A7__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A8__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A8__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A8__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A8__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A9__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A9__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A9__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A9__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A10__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A10__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A10__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A10__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A11__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A11__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A11__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A11__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A12__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A12__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A12__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A12__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A13__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A13__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A13__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A13__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A14__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A14__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A14__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A14__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A15__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A15__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A15__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A15__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A16__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A16__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A16__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A16__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A17__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A17__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A17__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A17__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A18__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A18__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A18__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A18__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A19__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A19__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A19__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A19__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A20__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A20__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A20__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A20__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A21__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A21__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A21__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A21__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A22__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A22__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A22__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A22__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A23__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A23__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A23__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A23__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A24__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A24__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A24__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A24__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A25__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A25__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A25__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A25__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A26__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A26__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A26__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A26__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A27__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A27__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A27__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A27__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A28__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A28__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A28__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A28__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A29__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A29__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A29__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A29__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A30__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A30__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A30__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A30__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A31__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A31__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A31__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A31__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A32__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A32__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A32__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A32__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A33__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A33__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A33__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A33__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A34__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A34__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A34__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A34__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A35__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A35__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A35__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A35__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A36__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A36__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A36__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A36__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A37__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A37__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A37__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A37__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A38__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A38__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A38__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A38__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A39__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A39__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A39__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A39__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A40__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A40__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A40__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A40__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A41__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A41__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A41__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A41__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A42__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A42__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A42__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A42__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A43__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A43__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A43__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A43__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A44__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A44__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A44__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A44__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A45__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A45__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A45__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A45__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A46__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A46__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A46__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A46__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A47__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A47__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A47__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A47__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A48__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A48__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A48__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A48__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A49__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A49__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A49__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A49__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A50__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A50__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A50__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A50__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A51__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A51__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A51__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A51__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A52__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A52__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A52__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A52__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A53__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A53__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A53__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A53__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A54__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A54__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A54__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A54__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A55__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A55__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A55__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A55__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A56__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A56__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A56__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A56__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A57__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A57__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A57__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A57__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A58__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A58__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A58__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A58__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A59__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A59__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A59__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A59__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A60__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A60__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A60__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A60__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A61__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A61__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A61__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A61__DOT____Vtogcov__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A62__DOT__a);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A62__DOT__b);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A62__DOT__sum);
    VL_ZERO_RESET_W(128, vlSelf->multiplier__DOT__A62__DOT____Vtogcov__sum);
}

VL_ATTR_COLD void Vtop___024root___configure_coverage_0(Vtop___024root* vlSelf, bool first);
VL_ATTR_COLD void Vtop___024root___configure_coverage_1(Vtop___024root* vlSelf, bool first);
VL_ATTR_COLD void Vtop___024root___configure_coverage_2(Vtop___024root* vlSelf, bool first);

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    Vtop___024root___configure_coverage_0(vlSelf, first);
    Vtop___024root___configure_coverage_1(vlSelf, first);
    Vtop___024root___configure_coverage_2(vlSelf, first);
}

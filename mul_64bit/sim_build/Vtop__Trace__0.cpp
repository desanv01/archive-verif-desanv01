// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.start));
    bufp->chgQData(oldp+3,(vlSelfRef.multiplicand_in),64);
    bufp->chgQData(oldp+5,(vlSelfRef.multiplier_in),64);
    bufp->chgWData(oldp+7,(vlSelfRef.product),128);
    bufp->chgBit(oldp+11,(vlSelfRef.busy));
    bufp->chgBit(oldp+12,(vlSelfRef.done));
    bufp->chgBit(oldp+13,(vlSelfRef.multiplier_64x64__DOT__clk));
    bufp->chgBit(oldp+14,(vlSelfRef.multiplier_64x64__DOT__reset));
    bufp->chgBit(oldp+15,(vlSelfRef.multiplier_64x64__DOT__start));
    bufp->chgQData(oldp+16,(vlSelfRef.multiplier_64x64__DOT__multiplicand_in),64);
    bufp->chgQData(oldp+18,(vlSelfRef.multiplier_64x64__DOT__multiplier_in),64);
    bufp->chgWData(oldp+20,(vlSelfRef.multiplier_64x64__DOT__product),128);
    bufp->chgBit(oldp+24,(vlSelfRef.multiplier_64x64__DOT__busy));
    bufp->chgBit(oldp+25,(vlSelfRef.multiplier_64x64__DOT__done));
    bufp->chgWData(oldp+26,(vlSelfRef.multiplier_64x64__DOT__multiplicand_reg),128);
    bufp->chgQData(oldp+30,(vlSelfRef.multiplier_64x64__DOT__multiplier_reg),64);
    bufp->chgCData(oldp+32,(vlSelfRef.multiplier_64x64__DOT__count),7);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

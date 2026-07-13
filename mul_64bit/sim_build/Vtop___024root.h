// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(busy,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ multiplier_64x64__DOT__clk;
    CData/*0:0*/ multiplier_64x64__DOT__reset;
    CData/*0:0*/ multiplier_64x64__DOT__start;
    CData/*0:0*/ multiplier_64x64__DOT__busy;
    CData/*0:0*/ multiplier_64x64__DOT__done;
    CData/*6:0*/ multiplier_64x64__DOT__count;
    CData/*0:0*/ multiplier_64x64__DOT____Vtogcov__clk;
    CData/*0:0*/ multiplier_64x64__DOT____Vtogcov__reset;
    CData/*0:0*/ multiplier_64x64__DOT____Vtogcov__start;
    CData/*0:0*/ multiplier_64x64__DOT____Vtogcov__busy;
    CData/*0:0*/ multiplier_64x64__DOT____Vtogcov__done;
    CData/*6:0*/ multiplier_64x64__DOT____Vtogcov__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_OUTW(product,127,0,4);
    VlWide<4>/*127:0*/ multiplier_64x64__DOT__product;
    VlWide<4>/*127:0*/ multiplier_64x64__DOT__multiplicand_reg;
    VlWide<4>/*127:0*/ multiplier_64x64__DOT____Vtogcov__product;
    VlWide<4>/*127:0*/ multiplier_64x64__DOT____Vtogcov__multiplicand_reg;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(multiplicand_in,63,0);
    VL_IN64(multiplier_in,63,0);
    QData/*63:0*/ multiplier_64x64__DOT__multiplicand_in;
    QData/*63:0*/ multiplier_64x64__DOT__multiplier_in;
    QData/*63:0*/ multiplier_64x64__DOT__multiplier_reg;
    QData/*63:0*/ multiplier_64x64__DOT____Vtogcov__multiplicand_in;
    QData/*63:0*/ multiplier_64x64__DOT____Vtogcov__multiplier_in;
    QData/*63:0*/ multiplier_64x64__DOT____Vtogcov__multiplier_reg;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard

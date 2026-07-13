// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_multiplier_64x64);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(109);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_multiplier_64x64.configure(this, name(), "multiplier_64x64", "multiplier_64x64", "multiplier_64x64", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_multiplier_64x64);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"busy", &(TOP.busy), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"done", &(TOP.done), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"multiplicand_in", &(TOP.multiplicand_in), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"multiplier_in", &(TOP.multiplier_in), false, VLVT_UINT64,VLVD_IN|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_TOP.varInsert(__Vfinal,"product", &(TOP.product), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,0,1 ,127,0);
        __Vscope_TOP.varInsert(__Vfinal,"reset", &(TOP.reset), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"start", &(TOP.start), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"busy", &(TOP.multiplier_64x64__DOT__busy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"clk", &(TOP.multiplier_64x64__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"count", &(TOP.multiplier_64x64__DOT__count), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"done", &(TOP.multiplier_64x64__DOT__done), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"multiplicand_in", &(TOP.multiplier_64x64__DOT__multiplicand_in), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"multiplicand_reg", &(TOP.multiplier_64x64__DOT__multiplicand_reg), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,127,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"multiplier_in", &(TOP.multiplier_64x64__DOT__multiplier_in), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"multiplier_reg", &(TOP.multiplier_64x64__DOT__multiplier_reg), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"product", &(TOP.multiplier_64x64__DOT__product), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,127,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"reset", &(TOP.multiplier_64x64__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_multiplier_64x64.varInsert(__Vfinal,"start", &(TOP.multiplier_64x64__DOT__start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}

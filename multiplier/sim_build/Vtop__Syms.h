// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // COVERAGE
    uint32_t __Vcoverage[24576];

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_multiplier;
    VerilatedScope __Vscope_multiplier__A0;
    VerilatedScope __Vscope_multiplier__A1;
    VerilatedScope __Vscope_multiplier__A10;
    VerilatedScope __Vscope_multiplier__A11;
    VerilatedScope __Vscope_multiplier__A12;
    VerilatedScope __Vscope_multiplier__A13;
    VerilatedScope __Vscope_multiplier__A14;
    VerilatedScope __Vscope_multiplier__A15;
    VerilatedScope __Vscope_multiplier__A16;
    VerilatedScope __Vscope_multiplier__A17;
    VerilatedScope __Vscope_multiplier__A18;
    VerilatedScope __Vscope_multiplier__A19;
    VerilatedScope __Vscope_multiplier__A2;
    VerilatedScope __Vscope_multiplier__A20;
    VerilatedScope __Vscope_multiplier__A21;
    VerilatedScope __Vscope_multiplier__A22;
    VerilatedScope __Vscope_multiplier__A23;
    VerilatedScope __Vscope_multiplier__A24;
    VerilatedScope __Vscope_multiplier__A25;
    VerilatedScope __Vscope_multiplier__A26;
    VerilatedScope __Vscope_multiplier__A27;
    VerilatedScope __Vscope_multiplier__A28;
    VerilatedScope __Vscope_multiplier__A29;
    VerilatedScope __Vscope_multiplier__A3;
    VerilatedScope __Vscope_multiplier__A30;
    VerilatedScope __Vscope_multiplier__A31;
    VerilatedScope __Vscope_multiplier__A32;
    VerilatedScope __Vscope_multiplier__A33;
    VerilatedScope __Vscope_multiplier__A34;
    VerilatedScope __Vscope_multiplier__A35;
    VerilatedScope __Vscope_multiplier__A36;
    VerilatedScope __Vscope_multiplier__A37;
    VerilatedScope __Vscope_multiplier__A38;
    VerilatedScope __Vscope_multiplier__A39;
    VerilatedScope __Vscope_multiplier__A4;
    VerilatedScope __Vscope_multiplier__A40;
    VerilatedScope __Vscope_multiplier__A41;
    VerilatedScope __Vscope_multiplier__A42;
    VerilatedScope __Vscope_multiplier__A43;
    VerilatedScope __Vscope_multiplier__A44;
    VerilatedScope __Vscope_multiplier__A45;
    VerilatedScope __Vscope_multiplier__A46;
    VerilatedScope __Vscope_multiplier__A47;
    VerilatedScope __Vscope_multiplier__A48;
    VerilatedScope __Vscope_multiplier__A49;
    VerilatedScope __Vscope_multiplier__A5;
    VerilatedScope __Vscope_multiplier__A50;
    VerilatedScope __Vscope_multiplier__A51;
    VerilatedScope __Vscope_multiplier__A52;
    VerilatedScope __Vscope_multiplier__A53;
    VerilatedScope __Vscope_multiplier__A54;
    VerilatedScope __Vscope_multiplier__A55;
    VerilatedScope __Vscope_multiplier__A56;
    VerilatedScope __Vscope_multiplier__A57;
    VerilatedScope __Vscope_multiplier__A58;
    VerilatedScope __Vscope_multiplier__A59;
    VerilatedScope __Vscope_multiplier__A6;
    VerilatedScope __Vscope_multiplier__A60;
    VerilatedScope __Vscope_multiplier__A61;
    VerilatedScope __Vscope_multiplier__A62;
    VerilatedScope __Vscope_multiplier__A7;
    VerilatedScope __Vscope_multiplier__A8;
    VerilatedScope __Vscope_multiplier__A9;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

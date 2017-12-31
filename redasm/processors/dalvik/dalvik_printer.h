#ifndef DALVIK_PRINTER_H
#define DALVIK_PRINTER_H

#include "../../plugins/processor/printer.h"

namespace REDasm {

class DalvikPrinter : public Printer
{
    public:
        DalvikPrinter(DisassemblerFunctions* disassembler, SymbolTable* symboltable);
        virtual std::string reg(const RegisterOperand &regop) const;
        virtual std::string imm(const Operand& op) const;
};

} // namespace REDasm

#endif // DALVIK_PRINTER_H

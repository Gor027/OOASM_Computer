#ifndef OOASM_INC_H
#define OOASM_INC_H

#include "Memory.h"
#include "Rvalue.h"
#include "Mem.h"
#include "Instruction.h"

class Inc : public Instruction {
public:
    Inc(std::shared_ptr<Lvalue> arg) : _arg(arg) {}
    
    void execute(Memory &memory) override;

private:
    std::shared_ptr<Lvalue> _arg;
};

#endif //OOASM_INC_H

#ifndef OOASM_SUB_H
#define OOASM_SUB_H

#include "Memory.h"
#include "Rvalue.h"
#include "Mem.h"
#include "Instruction.h"

class Sub : public Instruction {
public:
    Sub(std::shared_ptr<Lvalue> arg1, std::shared_ptr<Rvalue> arg2) : _arg1(arg1), _arg2(arg2) {}
    
    void execute(Memory &memory) override;
    
private:
    std::shared_ptr<Lvalue> _arg1;
    std::shared_ptr<Rvalue> _arg2;
};

#endif //OOASM_SUB_H

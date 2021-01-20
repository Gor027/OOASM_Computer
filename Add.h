#ifndef OOASM_ADD_H
#define OOASM_ADD_H

#include "Memory.h"
#include "Rvalue.h"
#include "Mem.h"
#include "Instruction.h"

class Add : public Instruction {
public:
    Add(std::shared_ptr<Lvalue> arg1, std::shared_ptr<Rvalue> arg2) : _arg1(arg1), _arg2(arg2) {}
    
    void execute(Memory &memory) override;
    
private:
    std::shared_ptr<Lvalue> _arg1;
    std::shared_ptr<Rvalue> _arg2;
};

#endif //OOASM_ADD_H

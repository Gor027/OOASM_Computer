#ifndef OOASM_DEC_H
#define OOASM_DEC_H

#include <utility>

#include "Memory.h"
#include "Mem.h"
#include "Instruction.h"

class Dec : public Instruction {
public:
    explicit Dec(std::shared_ptr<Lvalue> arg) : _arg(std::move(arg)) {}
    
    void execute(Memory &memory) override;
    
private:
    std::shared_ptr<Lvalue> _arg;
};

#endif //DEC_H

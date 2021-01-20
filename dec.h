#ifndef DEC_H
#define DEC_H

#include "Memory.h"
#include "Rvalue.h"
#include "Instruction.h"
#include "Mem.h"

class inc : public Instruction {
public:
    inc(const Mem& arg) : _arg(arg) {}
    
    void execute(Memory &memory) override {
        _arg.setValue(_arg.getValue(memory) - 1, memory);
    }

    void declare(Memory &memory) override {}
    
private:
    Mem _arg;
};

#endif //DEC_H

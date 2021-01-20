#ifndef ADD_H
#define ADD_H

#include "Memory.h"
#include "Rvalue.h"
#include "Mem.h"
#include "Instruction.h"

class add : public Instruction {
public:
    add(const Mem& arg1, const Rvalue& arg2) : _arg1(arg1), _arg2(arg2) {}
    
    void execute(Memory &memory) override {
        int64_t val1 = _arg1.getValue(memory);
        int64_t val2 = _arg2.getValue(memory);
    
        _arg1.setValue(val1 + val2, memory);
    }

    void declare(Memory &memory) override {}
    
private:
    Mem _arg1;
    Rvalue _arg2;
};

#endif //ADD_H

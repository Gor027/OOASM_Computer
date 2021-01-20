#ifndef MOV_H
#define MOV_H

#include "Memory.h"
#include "Rvalue.h"
#include "Lvalue.h"
#include "Instruction.h"

class mov : public Instruction {
public:
    mov(const Lvalue& dst, const Rvalue& src) : _dst(dst), _src(src) {}
    
    void execute(Memory &memory) override {
        _dst.setValue(_src.getValue(memory), memory);
    }

    void declare(Memory &memory) override {}
    
private:
    Lvalue _dst;
    Rvalue _src;
};

#endif //MOV_H

#ifndef DATA_H
#define DATA_H

#include "Memory.h"
#include "Id.h"
#include "Instruction.h"
#include "Num.h"

class data : public Instruction {
public:
    data(const Id& dst, const Num& src) : _dst(dst), _src(src) {}
    
    void execute(Memory &memory) override {}

    void declare(Memory &memory) override {
        memory.declareNewVariable(_dst, _src.getValue(memory));
    }
    
private:
    Id _dst;
    Num _src;
};

#endif //DATA_H

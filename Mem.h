#ifndef OOASM_MEM_H
#define OOASM_MEM_H

#include "Rvalue.h"
#include "Lvalue.h"
#include "Memory.h"
#include "Instruction.h"
#include <memory>

class Mem : public Lvalue, public Rvalue, public Instruction {
public:
    explicit Mem(Rvalue *memValue, Memory &memory);

    void setValue(int64_t value, Memory &memory) override;

    int64_t getValue(Memory &memory) override;

    void execute(Memory &memory) override;

    void declare(Memory &memory) override;

private:
    uint64_t address;
};

#endif //OOASM_MEM_H
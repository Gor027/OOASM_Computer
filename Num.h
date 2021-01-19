#ifndef OOASM_NUM_H
#define OOASM_NUM_H

#include "Memory.h"
#include "Rvalue.h"
#include "Instruction.h"

class Num : public Rvalue, public Instruction {
public:
    explicit Num(int64_t value);

    int64_t getValue(Memory &memory) override;

    void execute(Memory &memory) override;

    void declare(Memory &memory) override;

private:
    int64_t _value;
};

#endif //OOASM_NUM_H

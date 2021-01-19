#ifndef OOASM_LEA_H
#define OOASM_LEA_H

#include "Memory.h"
#include "Rvalue.h"
#include "Id.h"
#include "Instruction.h"

class Lea : public Rvalue, public Instruction {
public:
    explicit Lea(const char *name);

    int64_t getValue(Memory &memory) override;

    void execute(Memory &memory) override;

    void declare(Memory &memory) override;

private:
    Id _name;
};

#endif //OOASM_LEA_H
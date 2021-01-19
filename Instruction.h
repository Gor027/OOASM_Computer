#ifndef OOASM_INSTRUCTION_H
#define OOASM_INSTRUCTION_H

#include "Memory.h"

class Instruction {
public:
    virtual void execute(Memory &memory) {};

    /* This will enable to declare all variables before execution of any Instruction */
    /* TODO: maybe another interface should be created for fundamental elements of OOASM */
    virtual void declare(Memory &memory) {};
};

#endif //OOASM_INSTRUCTION_H
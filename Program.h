#ifndef OOASM_PROGRAM_H
#define OOASM_PROGRAM_H

#include <vector>
#include "Instruction.h"

class program {
public:
    program(std::initializer_list<Instruction>);

    const Instruction &next();

    void restartIterator();

private:
    std::vector<Instruction> instructionList;
    size_t instructionIterator;
};

#endif //OOASM_PROGRAM_H

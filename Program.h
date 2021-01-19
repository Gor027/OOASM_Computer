#ifndef OOASM_PROGRAM_H
#define OOASM_PROGRAM_H

#include <vector>
#include "Instruction.h"

class Program {
public:
    Program(std::initializer_list<Instruction> instructionList);

    const std::vector<Instruction> &getInstructionList() const;

    size_t getInstructionIterator() const;

    const Instruction &next();

    void restartIterator();

private:
    std::vector<Instruction> instructionList;
    size_t instructionIterator;
};

#endif //OOASM_PROGRAM_H

#ifndef OOASM_PROGRAM_H
#define OOASM_PROGRAM_H

#include <vector>
#include "Instructions.h"

class Program {
public:
    Program(std::initializer_list<std::shared_ptr<Instruction>> instructionList);

    const std::vector<std::shared_ptr<Instruction>> &getInstructionList() const;

    size_t getInstructionIterator() const;

    std::shared_ptr<Instruction> next();

    void restartIterator();

private:
    std::vector<std::shared_ptr<Instruction>> instructionList;
    size_t instructionIterator;
};

#endif //OOASM_PROGRAM_H

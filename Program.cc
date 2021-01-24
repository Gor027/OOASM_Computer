#include "Program.h"

Program::Program(std::initializer_list<std::shared_ptr<Instruction>> instList) : instructionList(instList),
                                                                                 instructionIterator(0) {}

void Program::restartIterator() {
    instructionIterator = 0;
}

const std::vector<std::shared_ptr<Instruction>> &Program::getInstructionList() const {
    return instructionList;
}

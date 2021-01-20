#include "Program.h"

Program::Program(std::initializer_list<std::shared_ptr<Instruction>> instList) : instructionList(instList), instructionIterator(0) {
}

std::shared_ptr<Instruction> Program::next() {
    return instructionList[instructionIterator++];
}

void Program::restartIterator() {
    instructionIterator = 0;
}

const std::vector<std::shared_ptr<Instruction>> &Program::getInstructionList() const {
    return instructionList;
}

size_t Program::getInstructionIterator() const {
    return instructionIterator;
}

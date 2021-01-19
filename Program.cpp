#include "Program.h"

Program::Program(std::initializer_list<Instruction> instList) : instructionList(instList), instructionIterator(0) {
}

const Instruction &Program::next() {
    return instructionList[instructionIterator++];
}

void Program::restartIterator() {
    instructionIterator = 0;
}

const std::vector<Instruction> &Program::getInstructionList() const {
    return instructionList;
}

size_t Program::getInstructionIterator() const {
    return instructionIterator;
}

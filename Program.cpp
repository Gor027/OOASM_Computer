//
// Created by gor on 16.01.2021.
//

#include "Program.h"

program::program(std::initializer_list<Instruction> instList) : instructionList(instList), instructionIterator(0) {
}

const Instruction &program::next() {
    return instructionList[instructionIterator++];
}

void program::restartIterator() {
    instructionIterator = 0;
}

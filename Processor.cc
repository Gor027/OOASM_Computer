#include "Processor.h"

void Processor::executeProgram(Program &program, Memory &memory) {
    memory.resetMemory();
    program.restartIterator();
    flags.resetFlags();

    for (const auto &instruction : program.getInstructionList()) {
        instruction->declare(memory);
    }

    for (const auto &instruction : program.getInstructionList()) {
        instruction->execute(memory, flags);
    }
}
#include "Processor.h"

void Processor::executeProgram(Program &program, Memory &memory) {
    memory.resetMemory(); /* Resets memory in computer */
    program.restartIterator(); /* Resets program iterator */

    for (const auto &instruction : program.getInstructionList()) {
        instruction->declare(memory);
    }

    for (const auto &instruction : program.getInstructionList()) {
        instruction->execute(memory);
    }
}
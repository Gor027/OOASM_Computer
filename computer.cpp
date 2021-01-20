#include "computer.h"

Computer::Computer(uint64_t cellNumbers) {
    this->memory = Memory(cellNumbers);
}

void Computer::boot(Program &program) {
    memory.resetMemory(); /* Resets memory in computer */
    program.restartIterator(); /* Resets program iterator */

    /* TODO: Here all necessary variables should be declared */
    for (auto instruction : program.getInstructionList()) {
        instruction->declare(memory);
    }

    /* TODO: Here program instructions should be executed */
    for (auto instruction : program.getInstructionList()) {
        instruction->execute(memory);
    }
}

void Computer::memory_dump(std::ostream &ss) const {
    for (uint64_t i = 0; i < memory.getMemLength(); i++) {
        ss << memory.getMemValue(i) << " ";
    }
}

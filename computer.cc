#include "computer.h"

Computer::Computer(uint64_t cellNumbers) {
    this->memory = Memory(cellNumbers);
}

void Computer::boot(Program &program) {
    processor.executeProgram(program, memory);
}

void Computer::memory_dump(std::ostream &ss) const {
    for (uint64_t i = 0; i < memory.getMemLength(); i++) {
        ss << memory.getMemValue(i) << " ";
    }
}

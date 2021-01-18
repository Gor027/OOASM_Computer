#include "computer.h"

Computer::Computer(uint64_t cellNumbers) {
    this->mem = Memory(cellNumbers);
}

void Computer::boot(const program &p) {

}

void Computer::memory_dump(std::ostream &ss) const {
    for (uint64_t i = 0; i < mem.getNumberOfVariables(); i++) {
        ss << mem.getMemValue(i) << " ";
    }
}

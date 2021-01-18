#include "Memory.h"
#include <stdexcept>

Memory::Memory() = default;

Memory::Memory(uint64_t size) : memSize(size) {
}

int64_t Memory::getMemValue(uint64_t index) const {
    return memCells[index];
}

void Memory::changeMemValue(uint64_t index, int64_t value) {
    memCells[index] = value;
}

uint64_t Memory::getVarAddr(const Id &name) {
    auto iter = variables.find(name);

    if (iter == variables.end()) {
        throw std::invalid_argument("Variable does not exist");
    }

    return getMemValue(iter->second);
}

void Memory::declareNewVariable(const Id &name, int64_t value) {
    if (numberOfVariables >= memSize)
        throw std::runtime_error("Memory full");

    memCells[numberOfVariables] = value;

    auto iter = variables.find(name);

    if (iter == variables.end()) {
        variables.insert(std::make_pair(name, numberOfVariables));
    }

    numberOfVariables++;
}

uint64_t Memory::getNumberOfVariables() const {
    return numberOfVariables;
}

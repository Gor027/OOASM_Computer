#include "Memory.h"

Memory::Memory(uint64_t size) : memSize(size), memCells(size) {}

int64_t Memory::getMemValue(uint64_t index) const {
    if (index >= getMemLength())
        throw std::out_of_range("Memory index out of bounds");
    return memCells[index];
}

void Memory::setMemValue(uint64_t index, int64_t value) {
    if (index >= getMemLength())
        throw std::out_of_range("Memory index out of bounds");
    memCells[index] = value;
}

uint64_t Memory::getVarAddr(const std::shared_ptr<Id> &name) const {
    auto iter = variables.find(*name);

    if (iter == variables.end())
        throw std::invalid_argument("Variable does not exist");

    return iter->second;
}

void Memory::declareNewVariable(const std::shared_ptr<Id> &name, int64_t value) {
    if (numberOfVariables >= memSize)
        throw std::runtime_error("Memory full");

    memCells[numberOfVariables] = value;

    auto iter = variables.find(*name);

    if (iter == variables.end()) {
        variables.insert(std::make_pair(*name, numberOfVariables));
    }

    numberOfVariables++;
}

uint64_t Memory::getNumberOfVariables() const {
    return numberOfVariables;
}

uint64_t Memory::getMemLength() const {
    return memSize;
}

void Memory::resetMemory() {
    std::fill(memCells.begin(), memCells.end(), 0);
    variables.clear();
    numberOfVariables = 0;
}

#include "Memory.h"
#include <stdexcept>

template<uint64_t Size>
int64_t Memory<Size>::getMemValue(uint64_t index) const {
    return memCells[index];
}

template<uint64_t Size>
void Memory<Size>::changeMemValue(uint64_t index, int64_t value) {
    memCells[index] = value;
}

template<uint64_t Size>
uint64_t Memory<Size>::getVarAddr(const Id &name) {
    auto iter = variables.find(name);

    if (iter == variables.end()) {
        throw std::invalid_argument("Variable does not exist");
    }

    return getMemValue(iter->second);
}

template<uint64_t Size>
void Memory<Size>::declareNewVariable(const Id &name, int64_t value) {
    if (numberOfVariables >= Size)
        throw std::runtime_error("Memory full");

    memCells[numberOfVariables] = value;

    auto iter = variables.find(name);

    if (iter == variables.end()) {
        variables.insert(std::make_pair(name, numberOfVariables));
    }

    numberOfVariables++;
}

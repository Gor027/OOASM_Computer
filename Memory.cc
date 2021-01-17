#include "Memory.h"
#include <stdexcept>

//TODO: Maybe exceptions should be separate classes.

template<uint64_t Size>
Memory<Size>::int64_t getMemValue(uint64_t index) const{
    return memCells[index];
}

template<uint64_t Size>
Memory<Size>::void changeMemValue(uint64_t index, int64_t value) {
    memCells[index] = value;
}

template<uint64_t Size>
Memory<Size>::uint64_t getVarAddr(Id &name) {
    auto iter = variables.find(name);

    if(iter == variables.end())
        throw exception("Variable does not exist");

    return getMemValue(iter->second);
}

template<uint64_t Size>
Memory<Size>::void declareNewVariable(Id &name, int64_t value) {
    if (numberOfVariables >= Size)
        throw exception("Memory full");

    memCells[numberOfVariables] = value;
    
    auto iter = memCells.find(name);

    if(iter == memCells.end()) {
        memCells.insert(std::make_pair(name, numberOfVariables))
    }
    
    numberOfVariables++;
}

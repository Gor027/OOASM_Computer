#ifndef OOASM_MEMORY_H
#define OOASM_MEMORY_H

#include <array>
#include <map>
#include <cstdint>
#include <stdexcept>
#include "Id.h"
#include "Flags.h"

template<uint64_t Size>
class Memory {
private:
    std::array<int64_t, Size> memCells;
    std::map<Id, uint64_t> variables;
    uint64_t numberOfVariables = 0;

public:
    // Maybe flags should be just bool not separate classes.
    ZF zeroFlag;
    SF signFlag;

    int64_t getMemValue(uint64_t index) const;

    void changeMemValue(uint64_t index, int64_t value);

    uint64_t getVarAddr(const Id &name);

    void declareNewVariable(const Id &name, int64_t value);
};

#endif //OOASM_MEMORY_H

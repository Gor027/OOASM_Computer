#ifndef OOASM_MEMORY_H
#define OOASM_MEMORY_H

#include <map>
#include <vector>
#include <memory>

#include "Id.h"

class Memory {
public:
    explicit Memory(uint64_t size);

    int64_t getMemValue(uint64_t index) const;

    uint64_t getMemLength() const;

    void setMemValue(uint64_t index, int64_t value);

    uint64_t getVarAddr(const std::shared_ptr<Id> &name) const;

    void declareNewVariable(const std::shared_ptr<Id> &name, int64_t value);

    void resetMemory();

private:
    uint64_t memSize = 0;
    uint64_t numberOfVariables = 0;
    std::vector<int64_t> memCells;
    std::map<Id, uint64_t> variables;
};

#endif //OOASM_MEMORY_H

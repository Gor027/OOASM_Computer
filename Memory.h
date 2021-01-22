#ifndef OOASM_MEMORY_H
#define OOASM_MEMORY_H

#include <map>
#include <cstdint>
#include <stdexcept>
#include <vector>
#include <memory>

#include "Id.h"

class Memory {
public:
    Memory();

    explicit Memory(uint64_t size);

    int64_t getMemValue(uint64_t index) const;

    uint64_t getNumberOfVariables() const;

    uint64_t getMemLength() const;

    void setMemValue(uint64_t index, int64_t value);

    uint64_t getVarAddr(const std::shared_ptr<Id> &name);

    void declareNewVariable(const std::shared_ptr<Id> &name, int64_t value);

    void setZF(bool value);

    void setSF(bool value);

    bool getZF() const;

    bool getSF() const;

    void resetMemory();

private:
    uint64_t memSize = 0;
    uint64_t numberOfVariables = 0;
    std::vector<int64_t> memCells;
    std::map<Id, uint64_t> variables;
    bool zeroFlag = false;
    bool signFlag = false;
};

#endif //OOASM_MEMORY_H

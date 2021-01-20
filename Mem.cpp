#include "Mem.h"

void Mem::setValue(int64_t value, Memory &memory) {
    auto addr = _expr->getValue(memory);
    return memory.setMemValue(addr, value);
}

int64_t Mem::getValue(Memory &memory) {
    auto addr = _expr->getValue(memory);
    return memory.getMemValue(addr);
}


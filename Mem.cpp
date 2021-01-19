#include "Mem.h"

Mem::Mem(Rvalue *memValue, Memory &memory) {
    int64_t val = memValue->getValue(memory);

    if (val >= 0) {
        address = val;
    } else {
        /* TODO: Should throw an exception saying that cannot allocate memory of negative index */
    }
}

void Mem::setValue(int64_t value, Memory &memory) {
    return memory.setMemValue(address, value);
}

int64_t Mem::getValue(Memory &memory) {
    return memory.getMemValue(address);
}

void Mem::execute(Memory &memory) {
}

void Mem::declare(Memory &memory) {
}


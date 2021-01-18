#include "Lea.h"

Lea::Lea(const char* name): _name(name) {}

int64_t Lea::getValue(Memory &memory) {
    return memory.getVarAddr(name);
}

Lea lea(const char* name) {
    return Lea(name).getValue();
}
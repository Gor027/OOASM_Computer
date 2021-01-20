#include "Lea.h"

Lea::Lea(const char *name) : _name(std::make_shared<Id>(name)) {}

int64_t Lea::getValue(Memory &memory) {
    return memory.getVarAddr(_name);
}

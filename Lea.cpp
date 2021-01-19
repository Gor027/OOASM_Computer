#include "Lea.h"

Lea::Lea(const char *name) : _name(name) {}

int64_t Lea::getValue(Memory &memory) {
    return memory.getVarAddr(_name);
}

void Lea::execute(Memory &memory) {

}

void Lea::declare(Memory &memory) {
    /* TODO: It should call getValue(), imo */
}

#include "Num.h"

Num::Num(int64_t value) : _value(value) {}

int64_t Num::getValue(Memory &memory) {
    return _value;
}

void Num::execute(Memory &memory) {
}

void Num::declare(Memory &memory) {
    /* TODO: It should call getValue */
}

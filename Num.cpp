#include "Num.h"

Num::Num(int64_t value): _value(value) {}

int64_t Num::getValue(Memory &memory) {
    return _value;
}

Num num(int64_t value){
    return Num(value);
}


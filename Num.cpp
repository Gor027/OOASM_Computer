#include "Num.h"

Num::Num(int64_t value) : _value(value) {}

int64_t Num::getValue([[maybe_unused]]Memory &memory) {
    return _value;
}

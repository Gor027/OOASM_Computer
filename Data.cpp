#include "Data.h"

void Data::declare(Memory &memory) {
    memory.declareNewVariable(_name, _value->getValue(memory));
}

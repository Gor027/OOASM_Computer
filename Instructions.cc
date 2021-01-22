#include "Instructions.h"

void Data::declare(Memory &memory) {
    memory.declareNewVariable(_name, _value->getValue(memory));
}

void Mov::execute(Memory &memory) {
    _src->setValue(_dst->getValue(memory), memory);
}

void Add::execute(Memory &memory) {
    int64_t val1 = _arg1->getValue(memory);
    int64_t val2 = _arg2->getValue(memory);
    int64_t result = val1 + val2;

    _arg1->setValue(result, memory);

    memory.setZF(result == 0);
    memory.setSF(result < 1);
}

void Sub::execute(Memory &memory) {
    int64_t val1 = _arg1->getValue(memory);
    int64_t val2 = _arg2->getValue(memory);
    int64_t result = val1 - val2;

    _arg1->setValue(result, memory);

    memory.setZF(result == 0);
    memory.setSF(result < 1);
}

void One::execute(Memory &memory) {
    _arg->setValue(1, memory);
}

void Onez::execute(Memory &memory) {
    if (memory.getZF())
        _arg->setValue(1, memory);
}

void Ones::execute(Memory &memory) {
    if (memory.getSF())
        _arg->setValue(1, memory);
}
#include "Add.h"

void Add::execute(Memory &memory) {
    int64_t val1 = _arg1->getValue(memory);
    int64_t val2 = _arg2->getValue(memory);
    int64_t result = val1 + val2;

    _arg1->setValue(result, memory);

    memory.setZF(result == 0);
    memory.setSF(result < 1);
}
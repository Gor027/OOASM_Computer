#include "Dec.h"
#include <stdexcept>

void Dec::execute(Memory &memory) {
    int64_t val = _arg->getValue(memory);

    _arg->setValue(val - 1, memory);

    memory.setZF((val - 1) == 0);
    memory.setSF((val - 1) < 1);
}
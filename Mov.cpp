#include "Mov.h"

void Mov::execute(Memory &memory) {
    _src->setValue(_dst->getValue(memory), memory);
}
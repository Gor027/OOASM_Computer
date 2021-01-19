#include "ooasm.h"

Lea lea(const char *name) {
    return Lea(name);
}

Num num(int64_t value) {
    return Num(value);
}

Program program(std::initializer_list<Instruction> instructionList) {
    return Program(instructionList);
}

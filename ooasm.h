#ifndef OOASM_OOASM_H
#define OOASM_OOASM_H

#include "Lea.h"
#include "Num.h"
#include "Mem.h"
#include "Program.h"

Lea lea(const char *name);

Num num(int64_t value);

Mem mem(Rvalue *memValue, Memory &memory);

Program program(std::initializer_list<Instruction> instructionList);

#endif //OOASM_OOASM_H

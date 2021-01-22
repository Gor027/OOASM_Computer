#ifndef OOASM_PROCESSOR_H
#define OOASM_PROCESSOR_H

#include "Memory.h"
#include "Program.h"

class Processor {
public:
    void executeProgram(Program &program, Memory &memory);
};

#endif //OOASM_PROCESSOR_H
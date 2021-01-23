#ifndef OOASM_PROCESSOR_H
#define OOASM_PROCESSOR_H

#include "Program.h"
#include "ProcessorFlags.h"

class Processor {
private:
    ProcessorFlags flags;
public:
    void executeProgram(Program &program, Memory &memory);
};

#endif //OOASM_PROCESSOR_H
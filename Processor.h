#ifndef OOASM_PROCESSOR_H
#define OOASM_PROCESSOR_H

#include "Program.h"

class Processor {
private:
    ProcessorFlags flags;
public:
    void executeProgram(Program &program, Memory &memory);
};

#endif //OOASM_PROCESSOR_H
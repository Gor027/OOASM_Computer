#ifndef OOASM_COMPUTER_H
#define OOASM_COMPUTER_H

#include <cstdint>
#include <sstream>

#include "Program.h"
#include "Processor.h"
#include "Memory.h"

class Computer {
public:
    explicit Computer(uint64_t cellNumbers);

    void boot(Program &program);

    void memory_dump(std::ostream &ss) const;

private:
    Processor processor;
    Memory memory;
};

#endif //OOASM_COMPUTER_H

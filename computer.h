#ifndef OOASM_COMPUTER_H
#define OOASM_COMPUTER_H

#include <cstdint>
#include <sstream>
#include "Program.h"
#include "Memory.h"
#include "Num.h"
#include "Lea.h"
#include "Mem.h"

class Computer {
public:
    explicit Computer(uint64_t cellNumbers);

    void boot(const program &p);

    void memory_dump(std::ostream &ss) const;

private:
    Memory mem;
};

#endif //OOASM_COMPUTER_H

//
// Created by gor on 15.01.2021.
//

#ifndef OOASM_COMPUTER_H
#define OOASM_COMPUTER_H

#include <cstdint>
#include <sstream>
#include "Program.h"


class Computer {
public:
    explicit Computer(uint64_t cellNumbers);

    void boot(const program &p);

    void memory_dump(const std::stringstream &ss) const;

private:
    uint64_t memCellsNumber;
    /* TODO: a computer should have a memory */
};

#endif //OOASM_COMPUTER_H

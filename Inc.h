#ifndef OOASM_INC_H
#define OOASM_INC_H

#include <utility>

#include "Memory.h"
#include "Rvalue.h"
#include "Mem.h"
#include "Instruction.h"

class Inc : public Instruction {
public:
    explicit Inc(std::shared_ptr<Lvalue> arg) : _arg(std::move(arg)) {}

    void execute(Memory &memory) override;

private:
    std::shared_ptr<Lvalue> _arg;
};

#endif //OOASM_INC_H

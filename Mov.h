#ifndef MOV_H
#define MOV_H

#include <utility>

#include "Memory.h"
#include "Rvalue.h"
#include "Lvalue.h"
#include "Instruction.h"

class Mov : public Instruction {
public:
    Mov(std::shared_ptr<Lvalue> src, std::shared_ptr<Rvalue> dst) : _src{std::move(src)}, _dst{std::move(dst)} {}

    void execute(Memory &memory) override;

private:
    std::shared_ptr<Lvalue> _src;
    std::shared_ptr<Rvalue> _dst;
};

#endif //MOV_H

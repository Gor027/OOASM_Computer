#ifndef OOASM_MEM_H
#define OOASM_MEM_H

#include "Rvalue.h"
#include "Lvalue.h"
#include "Memory.h"

#include <memory>
#include <utility>

class Mem : public Lvalue{
public:
    explicit Mem(std::shared_ptr<Rvalue> expr): _expr(std::move(expr)) {}

    void setValue(int64_t value, Memory &memory) override;

    int64_t getValue(Memory &memory) override;

private:
    std::shared_ptr<Rvalue> _expr;
};

#endif //OOASM_MEM_H
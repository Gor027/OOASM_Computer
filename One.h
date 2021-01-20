#ifndef OOASM_ONE_H
#define OOASM_ONE_H

#include <memory>
#include <utility>
#include "Lvalue.h"
#include "Memory.h"
#include "Instruction.h"

class One : public Instruction {
public:
    explicit One(std::shared_ptr<Lvalue> arg) : _arg(std::move(arg)) {}

    void execute(Memory &memory) override {
        _arg->setValue(1, memory);
    }

protected:
    std::shared_ptr<Lvalue> _arg;
};

class Onez : public One {
public:
    explicit Onez(std::shared_ptr<Lvalue> arg) : One(std::move(arg)) {}

    void execute(Memory &memory) override {
        if (memory.getZF())
            _arg->setValue(1, memory);
    }
};

class Ones : public One {
public:
    explicit Ones(std::shared_ptr<Lvalue> arg) : One(std::move(arg)) {}

    void execute(Memory &memory) override {
        if (memory.getSF())
            _arg->setValue(1, memory);
    }
};

#endif //OOASM_ONE_H
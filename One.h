#ifndef OOASM_ONE_H
#define OOASM_ONE_H

#include <memory>
#include "Lvalue.h"
#include "Memory.h"
#include "Instruction.h"

class One: public Instruction {
public:
    One(std::shared_ptr<Lvalue> arg): _arg(arg) {}

    void execute(Memory &memory) override {
        _arg->setValue(1, memory);
    }

protected:
    std::shared_ptr<Lvalue> _arg;
};

class Onez: public One {
public:
    Onez(std::shared_ptr<Lvalue> arg): One(arg) {}

    void execute(Memory &memory) override {
        if (memory.getZF())
            _arg->setValue(1, memory);
    }
};

class Ones: public One {
public:
    Ones(std::shared_ptr<Lvalue> arg): One(arg) {}

    void execute(Memory &memory) override {
        if (memory.getSF())
            _arg->setValue(1, memory);
    }
};

#endif //OOASM_ONE_H
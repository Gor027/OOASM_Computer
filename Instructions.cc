#include "Instructions.h"

Data::Data(std::shared_ptr<Id> name, std::shared_ptr<Num> value) : _name(std::move(name)), _value(std::move(value)) {}

void Data::declare(Memory &memory) {
    memory.declareNewVariable(_name, _value->getValue(memory));
}

Mov::Mov(std::shared_ptr<Lvalue> src, std::shared_ptr<Rvalue> dst) : _src{std::move(src)}, _dst{std::move(dst)} {}

void Mov::execute(Memory &memory, [[maybe_unused]]ProcessorFlags &flags) {
    _src->setValue(_dst->getValue(memory), memory);
}

Add::Add(std::shared_ptr<Lvalue> arg1, std::shared_ptr<Rvalue> arg2) : _arg1(std::move(arg1)), _arg2(std::move(arg2)) {}

void Add::execute(Memory &memory, ProcessorFlags &flags) {
    int64_t val1 = _arg1->getValue(memory);
    int64_t val2 = _arg2->getValue(memory);
    int64_t result = val1 + val2;

    _arg1->setValue(result, memory);

    flags.setZF(result == 0);
    flags.setSF(result < 1);
}

Sub::Sub(std::shared_ptr<Lvalue> arg1, std::shared_ptr<Rvalue> arg2) : _arg1(std::move(arg1)), _arg2(std::move(arg2)) {}

void Sub::execute(Memory &memory, ProcessorFlags &flags) {
    int64_t val1 = _arg1->getValue(memory);
    int64_t val2 = _arg2->getValue(memory);
    int64_t result = val1 - val2;

    _arg1->setValue(result, memory);

    flags.setZF(result == 0);
    flags.setSF(result < 1);
}

One::One(std::shared_ptr<Lvalue> arg) : _arg(std::move(arg)) {}

void One::execute(Memory &memory, [[maybe_unused]]ProcessorFlags &flags) {
    _arg->setValue(1, memory);
}

Onez::Onez(std::shared_ptr<Lvalue> arg) : One(std::move(arg)) {}

void Onez::execute(Memory &memory, ProcessorFlags &flags) {
    if (flags.getZF())
        _arg->setValue(1, memory);
}

Ones::Ones(std::shared_ptr<Lvalue> arg) : One(std::move(arg)) {}

void Ones::execute(Memory &memory, ProcessorFlags &flags) {
    if (flags.getSF())
        _arg->setValue(1, memory);
}
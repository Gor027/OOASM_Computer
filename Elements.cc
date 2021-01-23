#include "Elements.h"

Mem::Mem(std::shared_ptr<Rvalue> expr) : _expr(std::move(expr)) {}

void Mem::setValue(int64_t value, Memory &memory) {
    auto addr = _expr->getValue(memory);
    return memory.setMemValue(addr, value);
}

int64_t Mem::getValue(Memory &memory) {
    auto addr = _expr->getValue(memory);
    return memory.getMemValue(addr);
}

Num::Num(int64_t value) : _value(value) {}

int64_t Num::getValue([[maybe_unused]]Memory &memory) {
    return _value;
}

Lea::Lea(const char *name) : _name(std::make_shared<Id>(name)) {}

int64_t Lea::getValue(Memory &memory) {
    return memory.getVarAddr(_name);
}

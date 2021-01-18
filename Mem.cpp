#include "Mem.h"

//TODO: here Rvalue exp is copied maybe we can use std::move(exp)
Mem::Mem(Rvalue exp): _exp(make_unique(exp)) {};

int64_t Mem::getValue(Memory &memory) {
    return memory.getMemValue(exp_ptr->getValue(memory));
}

uint64_t Mem::getAddr(Memory &memory) {
    return exp_ptr->getValue(memory);
}

Mem mem(Rvalue exp) {
    return Mem(exp);
}
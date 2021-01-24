#ifndef OOASM_OOASM_H
#define OOASM_OOASM_H

#include "Program.h"

std::shared_ptr<Lea> lea(const char *name);

std::shared_ptr<Num> num(int64_t value);

std::shared_ptr<Mem> mem(const std::shared_ptr<Rvalue> &expr);

std::shared_ptr<Data> data(const char *name, const std::shared_ptr<Num> &val);

std::shared_ptr<Mov> mov(const std::shared_ptr<Lvalue> &src, const std::shared_ptr<Rvalue> &dst);

std::shared_ptr<Add> add(const std::shared_ptr<Lvalue> &arg1, const std::shared_ptr<Rvalue> &arg2);

std::shared_ptr<Sub> sub(const std::shared_ptr<Lvalue> &arg1, const std::shared_ptr<Rvalue> &arg2);

std::shared_ptr<Add> inc(const std::shared_ptr<Lvalue> &arg);

std::shared_ptr<Sub> dec(const std::shared_ptr<Lvalue> &arg);

std::shared_ptr<One> one(const std::shared_ptr<Lvalue> &arg);

std::shared_ptr<Onez> onez(const std::shared_ptr<Lvalue> &arg);

std::shared_ptr<Ones> ones(const std::shared_ptr<Lvalue> &arg);

Program program(std::initializer_list<std::shared_ptr<Instruction>> instructionList);

#endif //OOASM_OOASM_H

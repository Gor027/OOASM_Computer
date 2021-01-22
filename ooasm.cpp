#include "ooasm.h"

std::shared_ptr<Lea> lea(const char *name) {
    return std::make_shared<Lea>(name);
}

std::shared_ptr<Num> num(int64_t value) {
    return std::make_shared<Num>(value);
}

std::shared_ptr<Mem> mem(const std::shared_ptr<Rvalue> &expr) {
    return std::make_shared<Mem>(expr);
}

std::shared_ptr<Data> data(const char *name, const std::shared_ptr<Num> &val) {
    return std::make_shared<Data>(std::make_shared<Id>(name), val);
}

std::shared_ptr<Mov> mov(const std::shared_ptr<Lvalue> &src, const std::shared_ptr<Rvalue> &dst) {
    return std::make_shared<Mov>(src, dst);
}

std::shared_ptr<Add> add(const std::shared_ptr<Lvalue> &arg1, const std::shared_ptr<Rvalue> &arg2) {
    return std::make_shared<Add>(arg1, arg2);
}

std::shared_ptr<Sub> sub(const std::shared_ptr<Lvalue> &arg1, const std::shared_ptr<Rvalue> &arg2) {
    return std::make_shared<Sub>(arg1, arg2);
}

std::shared_ptr<Add> inc(const std::shared_ptr<Lvalue> &arg) {
    return std::make_shared<Add>(arg, num(1));
}

std::shared_ptr<Sub> dec(const std::shared_ptr<Lvalue> &arg) {
    return std::make_shared<Sub>(arg, num(1));
}

std::shared_ptr<One> one(const std::shared_ptr<Lvalue> &arg) {
    return std::make_shared<One>(arg);
}

std::shared_ptr<Onez> onez(const std::shared_ptr<Lvalue> &arg) {
    return std::make_shared<Onez>(arg);
}

std::shared_ptr<Ones> ones(const std::shared_ptr<Lvalue> &arg) {
    return std::make_shared<Ones>(arg);
}

Program program(std::initializer_list<std::shared_ptr<Instruction>> instructionList) {
    return Program(instructionList);
}

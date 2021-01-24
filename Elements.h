#ifndef OOASM_ELEMENTS_H
#define OOASM_ELEMENTS_H

#include <memory>

#include "Memory.h"

class Rvalue {
public:
    virtual int64_t getValue(Memory &memory) = 0;
};

class Lvalue : public Rvalue {
public:
    virtual void setValue(int64_t value, Memory &memory) = 0;
};

class Mem : public Lvalue {
public:
    explicit Mem(std::shared_ptr<Rvalue> expr);

    void setValue(int64_t value, Memory &memory) override;

    int64_t getValue(Memory &memory) override;

private:
    std::shared_ptr<Rvalue> _expr;
};

class Num : public Rvalue {
public:
    explicit Num(int64_t value);

    int64_t getValue(Memory &memory) override;

private:
    int64_t _value;
};

class Lea : public Rvalue {
public:
    explicit Lea(const char *name);

    int64_t getValue(Memory &memory) override;

private:
    std::shared_ptr<Id> _name;
};

#endif // OOASM_ELEMETNS_H
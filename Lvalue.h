#ifndef OOASM_LVALUE_H
#define OOASM_LVALUE_H

#include "Expression.h"
#include "Memory.h"

class Lvalue: public virtual Expression {
public:
    virtual uint64_t getAddr(Memory &memory);
    virtual ~Lvalue();
};

#endif //OOASM_LVALUE_H
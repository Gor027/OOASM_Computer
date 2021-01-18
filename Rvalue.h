#ifndef OOASM_RVALUE_H
#define OOASM_RVALUE_H

#include "Expression.h"
#include "Memory.h"

class Rvalue: public virtual Expression {
public:
    virtual int64_t getValue(Memory &memory);
    virtual ~Rvalue();
};

#endif //OOASM_RVALUE_H
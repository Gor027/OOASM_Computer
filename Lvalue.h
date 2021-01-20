#ifndef OOASM_LVALUE_H
#define OOASM_LVALUE_H

#include "Memory.h"

class Lvalue: public Rvalue {
public:
    virtual void setValue(int64_t value, Memory &memory) = 0;
};

#endif //OOASM_LVALUE_H
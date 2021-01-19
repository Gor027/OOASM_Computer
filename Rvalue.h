#ifndef OOASM_RVALUE_H
#define OOASM_RVALUE_H

#include "Memory.h"

class Rvalue {
public:
    virtual int64_t getValue(Memory &memory) = 0;
};

#endif //OOASM_RVALUE_H
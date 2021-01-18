#ifndef OOASM_NUM_H
#define OOASM_NUM_H

#include "Memory.h"
#include "Rvalue.h"

class Num: public Rvalue {
private:
    int64_t _value;
public:
    Num(int64_t value);
};

//Constructor wrapper function to keep the naming convention.
Num num(int64_t value);

#endif //OOASM_NUM_H

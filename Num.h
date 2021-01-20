#ifndef OOASM_NUM_H
#define OOASM_NUM_H

#include "Memory.h"
#include "Rvalue.h"

class Num : public Rvalue{
public:
    explicit Num(int64_t value);

    int64_t getValue(Memory &memory) override;

private:
    int64_t _value;
};

#endif //OOASM_NUM_H

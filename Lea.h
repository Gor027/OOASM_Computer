#ifndef OOASM_LEA_H
#define OOASM_LEA_H

#include "Memory.h"
#include "Rvalue.h"
#include "Id.h"

class Lea : public Rvalue {
public:
    explicit Lea(const char *name);

    int64_t getValue(Memory &memory) override;

private:
    std::shared_ptr<Id> _name;
};

#endif //OOASM_LEA_H
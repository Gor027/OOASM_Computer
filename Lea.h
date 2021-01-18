#ifndef OOASM_LEA_H
#define OOASM_LEA_H

#include "Memory.h"
#include "Rvalue.h"
#include "Id.h"

class Lea: public Rvalue {
private:
    Id _name;
public:
    Lea(const char* name);
};

//Constructor wrapper function to keep the naming convention.
Lea lea(const char* name);

#endif //OOASM_LEA_H
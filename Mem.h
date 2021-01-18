#ifndef OOASM_MEM_H
#define OOASM_MEM_H

#include "Rvalue.h"
#include "Lvalue.h"
#include "Memory.h"
#include <memory>

class Mem : public Lvalue, public Rvalue {
private:
    //Pointer has to be stored instead of the object to avoid cyclic dependecies during compile-time
    std::unique_ptr<Rvalue> exp_ptr;
public:
    Mem(Rvalue exp);
};

//Constructor wrapper function to keep the naming convention.
Mem mem(Rvalue exp);

#endif //OOASM_MEM_H
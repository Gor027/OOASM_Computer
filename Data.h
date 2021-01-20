#ifndef OOASM_DATA_H
#define OOASM_DATA_H

#include <memory>
#include "Memory.h"
#include "Id.h"
#include "Instruction.h"
#include "Num.h"

class Data : public Instruction {
public:
    Data(std::shared_ptr<Id> name, std::shared_ptr<Num> value) : _name(std::move(name)), _value(value) {}
    
    void execute([[maybe_unused]]Memory &memory) override {};

    void declare(Memory &memory) override;
    
private:
    std::shared_ptr<Id> _name;
    std::shared_ptr<Num> _value;
};

#endif //OOASM_DATA_H

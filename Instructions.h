#ifndef OOASM_INSTRUCTIONS_H
#define OOASM_INSTRUCTIONS_H

#include <memory>
#include <utility>

#include "Elements.h"
#include "ProcessorFlags.h"

class Instruction {
public:
    virtual void execute(Memory &memory, ProcessorFlags &flags) = 0;

    inline virtual void declare([[maybe_unused]]Memory &memory) {};

    virtual ~Instruction() = default;
};

class Data : public Instruction {
public:
    Data(std::shared_ptr<Id> name, std::shared_ptr<Num> value);

    inline void execute([[maybe_unused]]Memory &memory, [[maybe_unused]] ProcessorFlags &flags) override {};

    void declare(Memory &memory) override;

private:
    std::shared_ptr<Id> _name;
    std::shared_ptr<Num> _value;
};

class Mov : public Instruction {
public:
    Mov(std::shared_ptr<Lvalue> src, std::shared_ptr<Rvalue> dst);

    void execute(Memory &memory, [[maybe_unused]] ProcessorFlags &flags) override;

private:
    std::shared_ptr<Lvalue> _src;
    std::shared_ptr<Rvalue> _dst;
};

class Add : public Instruction {
public:
    Add(std::shared_ptr<Lvalue> arg1, std::shared_ptr<Rvalue> arg2);

    void execute(Memory &memory, ProcessorFlags &flags) override;

private:
    std::shared_ptr<Lvalue> _arg1;
    std::shared_ptr<Rvalue> _arg2;
};

class Sub : public Instruction {
public:
    Sub(std::shared_ptr<Lvalue> arg1, std::shared_ptr<Rvalue> arg2);

    void execute(Memory &memory, ProcessorFlags &flags) override;

private:
    std::shared_ptr<Lvalue> _arg1;
    std::shared_ptr<Rvalue> _arg2;
};

class One : public Instruction {
public:
    explicit One(std::shared_ptr<Lvalue> arg);

    void execute(Memory &memory, [[maybe_unused]] ProcessorFlags &flags) override;

protected:
    std::shared_ptr<Lvalue> _arg;
};

class Onez : public One {
public:
    explicit Onez(std::shared_ptr<Lvalue> arg);

    void execute(Memory &memory, ProcessorFlags &flags) override;
};

class Ones : public One {
public:
    explicit Ones(std::shared_ptr<Lvalue> arg);

    void execute(Memory &memory, ProcessorFlags &flags) override;
};

#endif //OOASM_INSTRUCTIONS_H
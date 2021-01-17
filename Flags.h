//
// Created by gor on 16.01.2021.
//

#ifndef OOASM_FLAGS_H
#define OOASM_FLAGS_H

#include <cstddef>

class ZF {
public:
    void setZero();

    void setOne();

private:
    size_t val;
};

class SF {
public:
    void setZero();

    void setOne();

private:
    size_t val;
};

#endif //OOASM_FLAGS_H

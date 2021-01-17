//
// Created by gor on 16.01.2021.
//

#include <cstring>
#include <stdexcept>
#include "Id.h"

Id::Id(const char *var) {
    size_t varLength = strlen(var);

    if (varLength < 1 || varLength > 10) {
        throw std::invalid_argument("The variable name should be in range of 1 to 10");
    }

    this->varId = var;
}


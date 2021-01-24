#include <cstring>
#include <stdexcept>

#include "Id.h"

class wrongIdNameLength : public std::exception {
public:
    const char *what() const noexcept override {
        return "Wrong length of variable identifier";
    }
};

Id::Id(const char *var) {
    size_t varLength = strlen(var);

    if (varLength < 1 || varLength > 10) {
        throw wrongIdNameLength();
    }

    this->varId = var;
}

bool Id::operator<(const Id &other) const {
    return varId < other.varId;
}


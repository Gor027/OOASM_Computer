#include <cstring>
#include <stdexcept>
#include "Id.h"

class wrongIdNameLength : public std::exception
{
public:
    virtual const char *what() const throw()
    {
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

const char* Id::getId() const {
    return varId;
}

bool Id::operator<(const Id &other) const {
    return varId < other.varId;
}


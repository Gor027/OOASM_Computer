#ifndef OOASM_ID_H
#define OOASM_ID_H

class Id {
public:
    explicit Id(const char *var);

    bool operator<(const Id &other) const;

private:
    const char *varId;
};

#endif //OOASM_ID_H

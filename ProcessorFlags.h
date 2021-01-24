#ifndef PROCESSOR_FLAGS_H
#define PROCESSOR_FLAGS_H

class ProcessorFlags {
public:
    inline void setZF(bool value) {
        zeroFlag = value;
    }

    inline void setSF(bool value) {
        signFlag = value;
    }

    inline bool getZF() const {
        return zeroFlag;
    }

    inline bool getSF() const {
        return signFlag;
    }

private:
    bool zeroFlag = false;
    bool signFlag = false;
};

#endif //PROCESSOR_FLAGS_H
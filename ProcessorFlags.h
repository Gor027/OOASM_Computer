#ifndef PROCESSOR_FLAGS_H
#define PROCESSOR_FLAGS_H

class ProcessorFlags {
private:
    bool zeroFlag, signFlag;
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

    inline void resetFlags() {
        zeroFlag = false;
        signFlag = false;
    }
};

#endif //PROCESSOR_FLAGS_H
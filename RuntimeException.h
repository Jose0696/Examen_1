//
// Created by mmelr on 15/9/2022.
//

#ifndef EXAMEN_1_RUNTIMEEXCEPTION_H
#define EXAMEN_1_RUNTIMEEXCEPTION_H

#include "Utils.h"

class RuntimeException {
private:
    string errorMsg;

public:
    RuntimeException(const string& err){ errorMsg = err;}
    string getMessage() const { return errorMsg; }
};

class StackEmpty: public RuntimeException{ public:
    StackEmpty(const string& err): RuntimeException(err){}
};

class StackFull: public RuntimeException{ public:
    StackFull(const string& err): RuntimeException(err){}
};

#endif //EXAMEN_1_RUNTIMEEXCEPTION_H

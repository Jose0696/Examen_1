//
// Created by Jose on 15/9/2022.
//

#ifndef EXAMEN_1_HANOI_H
#define EXAMEN_1_HANOI_H

#include <ostream>
#include "Utils.h"

class Hanoi {
private:
    int disco;

public:
    Hanoi(int disco = 0);
    virtual ~Hanoi() = default;

    friend ostream &operator<<(ostream &os, const Hanoi &hanoi);
};


#endif //EXAMEN_1_HANOI_H

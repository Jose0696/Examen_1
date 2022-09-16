//
// Created by Jose on 15/9/2022.
//

#include "Hanoi.h"

Hanoi::Hanoi(int disco) : disco(disco) {}

ostream &operator<<(ostream &os, const Hanoi &hanoi) {
    os << hanoi.disco;
    return os;
}

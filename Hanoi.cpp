//
// Created by Jose on 15/9/2022.
//

#include "Hanoi.h"

Hanoi::Hanoi(int disco) : disco(disco) {}

int Hanoi::getDisco() const {
    return disco;
}

void Hanoi::setDisco(int disco) {
    Hanoi::disco = disco;
}

ostream &operator<<(ostream &os, const Hanoi &hanoi) {
    os << "disco: " << hanoi.disco;
    return os;
}

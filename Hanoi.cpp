//
// Created by Jose on 15/9/2022.
//

#include "Hanoi.h"

int Hanoi::getDisco() const {
    return disco;
}

void Hanoi::setDisco(int disco) {
    Hanoi::disco = disco;
}

Hanoi::Hanoi() {
    disco = 0;
}

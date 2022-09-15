//
// Created by mmelr on 15/9/2022.
//

#ifndef EXAMEN_1_PILALISTA_H
#define EXAMEN_1_PILALISTA_H

#include "RuntimeException.h"
#include "Lista.cpp"

template<class tipo>
class PilaLista {
private:
    Lista<tipo> *S;
    int n;

public:
    PilaLista();
    ~PilaLista();
    int size();
    bool empty();
    tipo *top() throw(StackEmpty);
    void push(tipo *e);
    void pop() throw(StackEmpty);
};

#endif //EXAMEN_1_PILALISTA_H

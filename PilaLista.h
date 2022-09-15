//
// Created by mmelr on 15/9/2022.
//

#ifndef EXAMEN_1_PILALISTA_H
#define EXAMEN_1_PILALISTA_H

#include "RuntimeException.h"
#include "Lista.h"

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

template<class tipo>
PilaLista<tipo>::PilaLista():S(new Lista<tipo>), n(0) {

}

template<class tipo>
int PilaLista<tipo>::size() {
    return n;
}

template<class tipo>
bool PilaLista<tipo>::empty() {
    return n==0;
}

template<class tipo>
void PilaLista<tipo>::push(tipo *e) {
    ++n;
    S->agregarInicio(e);
}

template<class tipo>
tipo *PilaLista<tipo>::top() throw(class StackEmpty) {
    if(empty())
        throw StackEmpty("Top sobre un stack vacio");
    return S->inicio();
}

template<class tipo>
void PilaLista<tipo>::pop() throw(class StackEmpty) {
    if(empty())
        throw StackEmpty("Top sobre un stack vacio");
    return S->borrarInicio();
    n--;
}

template<class tipo>
PilaLista<tipo>::~PilaLista() {
    delete S;
}


#endif //EXAMEN_1_PILALISTA_H

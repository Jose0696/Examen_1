//
// Created by mmelr on 15/9/2022.
//

#include "PilaLista.h"

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
    S->borrarInicio();
    n--;
}

template<class tipo>
PilaLista<tipo>::~PilaLista() {
    delete S;
}

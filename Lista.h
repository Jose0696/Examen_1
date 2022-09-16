//
// Created by mmelr on 15/9/2022.
//

#ifndef EXAMEN_1_LISTA_H
#define EXAMEN_1_LISTA_H


#include "Nodo.cpp"

template<class tipo>
class Lista {
private:
    Nodo<tipo> *raiz;

public:
    Lista();
    ~Lista();
    string toString();
    tipo *inicio();

    void borrarInicio();
    void agregarInicio(tipo*);

};



#endif //EXAMEN_1_LISTA_H

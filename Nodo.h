//
// Created by Jose on 15/9/2022.
//

#ifndef EXAMEN_1_NODO_H
#define EXAMEN_1_NODO_H
#include "Utils.h"

template<class tipo>
class Nodo {
private:
    tipo *datos;
    Nodo *siguiente;

public:
    Nodo();
    tipo *getDatos() const;
    void setDatos(tipo *datos);
    Nodo *getSiguiente() const;
    void setSiguiente(Nodo *siguiente);
};

template<class tipo>
Nodo<tipo>::Nodo() {
    datos = nullptr;
    siguiente = nullptr;
}

template<class tipo>
tipo *Nodo<tipo>::getDatos() const {
    return datos;
}

template<class tipo>
void Nodo<tipo>::setDatos(tipo *datos) {
    Nodo::datos = datos;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getSiguiente() const {
    return siguiente;
}

template<class tipo>
void Nodo<tipo>::setSiguiente(Nodo *siguiente) {
    Nodo::siguiente = siguiente;
}

#endif //EXAMEN_1_NODO_H

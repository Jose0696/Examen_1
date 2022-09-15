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

#endif //EXAMEN_1_NODO_H

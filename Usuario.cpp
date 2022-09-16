//
// Created by Jose on 16/9/2022.
//

#include "Usuario.h"

Usuario::Usuario(const string &nombre) : nombre(nombre) {}

const string &Usuario::getNombre() const {
    return nombre;
}

int Usuario::getClave() const {
    return clave;
}

Usuario::Usuario() {
    nombre = " ";
    clave = 123;
}

void Usuario::setNombre(const string &nombre) {
    Usuario::nombre = nombre;
}


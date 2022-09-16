//
// Created by Jose on 16/9/2022.
//

#ifndef EXAMEN_1_USUARIO_H
#define EXAMEN_1_USUARIO_H
#include "Utils.h"

class Usuario {
private:
    string nombre;
    int clave;

public:
    Usuario(const string &nombre);

    Usuario();

    virtual ~Usuario() = default;

    void setNombre(const string &nombre);

    const string &getNombre() const;

    int getClave() const;
};


#endif //EXAMEN_1_USUARIO_H

//
// Created by Jose on 15/9/2022.
//

#ifndef EXAMEN_1_GAME_H
#define EXAMEN_1_GAME_H
#include "Hanoi.h"
#include "PilaLista.cpp"

template<class tipo>
class Game{
public:
    static int movimientosMinimos(int n);
    static void jugada(int valor, PilaLista<tipo> *torre1, PilaLista<tipo> *torre2, PilaLista<tipo> *torre3,stringstream& output);
    static void saveNumbers(PilaLista<tipo>* ,int, int);
    static int calcularNumero(int);
};


#endif //EXAMEN_1_GAME_H

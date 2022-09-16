//
// Created by Jose on 15/9/2022.
//

#ifndef EXAMEN_1_MENU_H
#define EXAMEN_1_MENU_H
#include "Game.cpp"

class Menu {
private:
    PilaLista<Hanoi>* torre1;
    PilaLista<Hanoi>* torre2;
    PilaLista<Hanoi>* torre3;
public:
    Menu();
    void imprimeMenu();
    void mostrarMenu();
    void Juego(int);
    void movimientosMinimos(int);
    void algoritmo();
};


#endif //EXAMEN_1_MENU_H

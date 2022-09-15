//
// Created by Jose on 15/9/2022.
//

#include "Menu.h"

Menu::Menu() {

}

void Menu::imprimeMenu() {
    mostrarMenu();
}

void Menu::mostrarMenu() {
    int opcion;
    cout << "--------------TORRES DE HANOI--------------\n";
    cout << "1) Ingresar al juego\n";
    cout << "2) Mostrar numeros minimos\n";
    cout << "3) Mostrar algoritmo paso a paso\n";
    cout << " Digite una opcion.....   ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "------Juego------" << endl;
            break;
        case 2:
            cout << "------Numeros minimos------" << endl;
            break;
        case 3:
            cout << "------Algoritmo------" << endl;
            break;
        default:
            break;
    }
}

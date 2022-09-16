//
// Created by Jose on 15/9/2022.
//

#include "Menu.h"

Menu::Menu() {
    usuario = new Usuario();
    torre1 = new PilaLista<Hanoi>("1");
    torre2 = new PilaLista<Hanoi>("2");
    torre3 = new PilaLista<Hanoi>("3");
}

void Menu::imprimeMenu() {
    crearUsuario();
    mostrarMenu();
}

void Menu::mostrarMenu() {
    int discos=0;
    int opcion;
    bool repetir;
    do {
        try {
            do {
                cout << "--------------TORRES DE HANOI--------------\n";
                cout << "Bienvenido :  " << usuario->getNombre() << "\n";
                cout << "1) Ingresar al juego\n";
                cout << "2) Mostrar numeros minimos\n";
                cout << "3) Mostrar algoritmo paso a paso\n";
                cout << "4) Salir\n";
                cout << " Digite una opcion.....   ";
                cin >> opcion;
                repetir = false;
                switch (opcion) {
                    case 1:
                        cout << "------Juego------" << endl;
                        cout << "Cuantos discos desea jugar? " << endl;
                        cin >> discos;
                        Juego(discos);
                        break;
                    case 2:
                        cout << "------Numeros minimos------" << endl;
                        cout << "Cuantos discos desea jugar? " << endl;
                        cin >> discos;
                        movimientosMinimos(discos);
                        break;
                    case 3:
                        cout << "------Algoritmo------" << endl;
                        algoritmo();
                        break;

                    case 4:
                        cout << "\nMuchas Gracias :) " << endl;
                        break;
                    default:
                        cout << "Error en la Opcion " << endl;
                        break;
                }
            } while (opcion != 4);
        } catch (RuntimeException e) {
            cout << e.getMessage() << endl;
            repetir = true;
        }
    } while (repetir);
}

void Menu::Juego(int discos) {
    int opcion2=0,cant=0;
    Game<Hanoi>::saveNumbers(torre1, discos, 0);
    do {
        cout << "Movimientos minimos: " << Game<Hanoi>::movimientosMinimos(discos) << endl;
        cout << "Movimientos realizados: " << cant << endl;
        cout << "Lista de movimientos: \n";
        cout << "1. De la pila 1 a la pila 2" << endl;
        cout << "2. De la pila 1 a la pila 3" << endl;
        cout << "3. De la pila 2 a la pila 1" << endl;
        cout << "4. De la pila 2 a la pila 3" << endl;
        cout << "5. De la pila 3 a la pila 1" << endl;
        cout << "6. De la pila 3 a la pila 2" << endl;
        cout << "7. Reiniciar el juego" << endl;
        cout << "8. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion2;
        switch (opcion2) {
            case 1:
                Game<Hanoi>::movimientos(torre1,torre2);
                cant++;
                break;
            case 2:
                Game<Hanoi>::movimientos(torre1,torre3);
                cant++;
                break;
            case 3:
                Game<Hanoi>::movimientos(torre2,torre1);
                cant++;
                break;
            case 4:
                Game<Hanoi>::movimientos(torre2,torre3);
                cant++;
                break;
            case 5:
                Game<Hanoi>::movimientos(torre3,torre1);
                cant++;
                break;
            case 6:
                Game<Hanoi>::movimientos(torre3,torre2);
                cant++;
                break;
            case 7:
                torre1->clean();
                torre2->clean();
                torre3->clean();
                Game<Hanoi>::saveNumbers(torre1,discos,0);
                cant = 0;
                break;
            case 8:
                cout << "Salir al menu principal" << endl;
                break;
            default:
                cout << "Esta opcion no esta disponible" << endl;
                break;
        }
    } while (opcion2 != 8);
    Game<Hanoi>::gane(torre1,torre2,torre3,discos);
    cant = 0;
}

void Menu::movimientosMinimos(int discos) {
    cout<<"La cantidad minima de movimientos para ganar con "<< discos <<" discos es de "<< Game<Hanoi>::movimientosMinimos(discos) <<endl;
}

void Menu::algoritmo() {
    stringstream s;
    int clave,valor;
    cout << "Ingrese la clave para mostrar el algoritmo: ";
    cin >> clave;
    if (usuario->getClave() == constrasenia) {
        cout << "Clave correcta" << endl;
        cout << "Ingrese la cantidad de discos: ";
        cin >> valor;
        Game<Hanoi>::saveNumbers(torre1, valor, 0);
        Game<Hanoi>::jugada(valor, torre1, torre2, torre3, s);
        cout << "Movimientos: \n" << s.str() << endl;
    } else
        cout << "Clave incorrecta" << endl;
}

void Menu::crearUsuario() {
    string nombre;

    cout << "Nombre de Usuario: ";
    cin >> nombre;

    usuario->setNombre(nombre);
    cout << "\nLa clave ya esta solicitada por defecto (123)" << endl;
}

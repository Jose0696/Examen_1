//
// Created by Jose on 15/9/2022.
//

#include "Menu.h"
const int constrasenia = 123;

Menu::Menu() {

}

void Menu::imprimeMenu() {
    mostrarMenu();
}

void Menu::mostrarMenu() {
    int discos=0;
    int opcion;
    bool repetir;
    do {
        try {
            do {
                //system("cls");
                cout << "--------------TORRES DE HANOI--------------\n";
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
                        int repetir;
                        do {
                            try {
                                int clave;
                                cout << "------Algoritmo------" << endl;
                                cout << "Ingresa la clave: ";
                                cin >> clave;
                                repetir = false;

                                algoritmo(clave);
                            } catch (RuntimeException e) {
                                cout << e.getMessage() << endl;
                                repetir = true;
                            }
                        }while(repetir);
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
/*    PilaLista<int> *pilaLista1 = new PilaLista<int>;
    PilaLista<int> *pilaLista2 = new PilaLista<int>;
    PilaLista<int> *pilaLista3 = new PilaLista<int>;
    for (int i = 1; i <= discos; i++) {
        pilaLista1->push(new int(i));
    }

    bool repetirint = 1;
    do {

        cout << "Torre 1: "<< pilaLista1->size()<<endl;
        cout << "Torre 2: "<< pilaLista3->size()<<endl;
        cout << "Torre 3: "<< pilaLista3->size()<<endl;

        int opcion;
        cout << "--------------TORRES DE HANOI--------------\n";
        cout << "1) De la pila 1 a la pila 2\n";
        cout << "2) De la pila 1 a la pila 3\n";
        cout << "3) De la pila 2 a la pila 1\n";
        cout << "4) De la pila 2 a la pila 3\n";
        cout << "5) De la pila 3 a la pila 1\n";
        cout << "6) De la pila 3 a la pila 2\n";
        cout << "7) Reiniciar el Juego\n";
        cout << " Digite una opcion.....   ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "De la pila 1 a la pila 2" << endl;
                if(pilaLista1->empty()!=true) {

                    pilaLista1->pop();
                    pilaLista2->push(new int(discos));
                    cout << pilaLista1->size() << endl;
                    cout << pilaLista2->size() << endl;
                }else cout<<"No se puede realizar la accion"<<endl;
                break;
            case 2:
                cout << "De la pila 1 a la pila 3" << endl;
                pilaLista1->pop();
                pilaLista3->push(new int(discos));
                cout << pilaLista1->size() << endl;
                cout << pilaLista3->size() << endl;
                break;
            case 3:
                cout << "De la pila 2 a la pila 1" << endl;
                pilaLista2->pop();
                pilaLista1->push(new int(discos));
                cout << pilaLista2->size() << endl;
                cout << pilaLista1->size() << endl;
                break;
            case 4:
                cout << "De la pila 2 a la pila 3" << endl;

                pilaLista2->pop();
                pilaLista3->push(new int(discos));
                cout << pilaLista2->size() << endl;
                cout << pilaLista3->size() << endl;
                break;
            case 5:
                cout << "De la pila 3 a la pila 1" << endl;
                pilaLista3->pop();
                pilaLista1->push(new int(discos));
                cout << pilaLista3->size() << endl;
                cout << pilaLista1->size() << endl;
                break;
            case 6:
                cout << "De la pila 3 a la pila 2" << endl;
                pilaLista3->pop();
                pilaLista2->push(new int(discos));
                cout << pilaLista3->size() << endl;
                cout << pilaLista2->size() << endl;
                break;
            case 7:
                cout<<"Reiniciando el Juego"<<endl;
                Juego(discos);
                break;
            default:
                break;
        }
    }while (repetirint);*/
}

void Menu::movimientosMinimos(int discos) {
    cout<<"La cantidad minima de movimientos para ganar con "<< discos <<" discos es de "<< Game<Hanoi>::movimientosMinimos(discos) <<endl;
}

void Menu::algoritmo(int clave) {
    try {
        stringstream output;
        int valor;
        if (clave == constrasenia) {
            cout << "contrasenia correcta " << endl;
            cout << "Ingrese la cantidad de discos: ";
            cin >> valor;
            Game<Hanoi>::saveNumbers(torre1,valor,0);
            Game<Hanoi>::jugada(valor,torre1,torre2,torre3,output);
        } else {
            cout << "contrasenia incorrecta " << endl;
        }
    }catch (RuntimeException e){
        cout << e.getMessage() << endl;
    }
}

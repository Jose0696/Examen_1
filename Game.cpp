//
// Created by Jose on 15/9/2022.
//

#include "Game.h"

template<class tipo>
int Game<tipo>::movimientosMinimos(int n){
    if(n==1)
        return 1;
    else
        return 2 * movimientosMinimos(n-1)+1;
}

template<class tipo>
void Game<tipo>::jugada(int valor, PilaLista<tipo> *torre1, PilaLista<tipo> *torre2, PilaLista<tipo> *torre3, stringstream& output) {
    if(valor==1) {
        torre3->push(torre1->top());
        torre1->pop();
        output <<"Mover el disco de la torre "<<torre1->getName()<<" a la torre "<<torre3->getName()<<endl;
    }else{
        jugada(valor-1,torre1,torre3,torre2,output);
        torre3->push(torre1->top());
        torre1->pop();
        output<<"Mover el disco de la torre "<<torre1->getName()<<" a la torre "<<torre3->getName()<<endl;
        jugada(valor-1,torre2,torre1,torre3,output);
    }
}

template<class tipo>
void Game<tipo>::saveNumbers(PilaLista<tipo> *torre, int valor, int h) {
    PilaLista<Hanoi>* aux = new PilaLista<Hanoi>;
    while(valor>0){
        aux->push(new Hanoi(calcularNumero(h)));
        valor--;
        h++;
    }
    while (!aux->empty()){
        torre->push(aux->top());
        aux->pop();
    }
}

template<class tipo>
int Game<tipo>::calcularNumero(int h) {
    return int ((h+4)*pow(h+9,h+1));
}

template<class tipo>
void Game<tipo>::movimientos(PilaLista<tipo> *salida, PilaLista<tipo>* entrada) {
    entrada->push(salida->top());
    salida->pop();
}
//
// Created by mmelr on 15/9/2022.
//

#include "Lista.h"

template<class tipo>
Lista<tipo>::~Lista() {
    Nodo<tipo> *temp;
    Nodo<tipo> *anterior;
    if(raiz->getSiguiente()== nullptr){
        delete raiz;
    }else{
        while(raiz->getSiguiente() != nullptr){
            temp= raiz;
            while(temp->getSiguiente() != nullptr){
                anterior = temp;
                temp = temp->getSiguiente();
            }
            anterior->getSiguiente(nullptr);
            delete temp;
        }
    }
    cout<< "Lista Borrada"<<endl;
}

template<class tipo>
string Lista<tipo>::toString() {
    stringstream ss;
    Nodo<tipo> *temporal = raiz;
    if(temporal->getSiguiente()== nullptr){
        ss<< "Lista vacia"<<endl;
    }else{
        temporal=temporal->getSiguiente();
        do{
            ss<< temporal->getDatos()->toString();
            ss<<"-->";
            temporal= temporal->getSiguiente();
        }while(temporal != nullptr);
        ss<< " NULL"<<endl;
    }
    return ss.str();
}

template<class tipo>
void Lista<tipo>::agregarInicio(tipo *p) {
    Nodo<tipo> *nuevo = new Nodo<tipo>;
    nuevo->setDatos(p);
    nuevo->setSiguiente(raiz->getSiguiente());
    raiz->setSiguiente(nuevo);
}

template<class tipo>  //retorna el valor que esta siempre al inicio
tipo *Lista<tipo>::inicio() {
    Nodo<tipo> *temp =raiz;
    if(temp->getSiguiente()!= nullptr){
        temp= temp->getSiguiente();
        return temp->getDatos();
    }
    return nullptr;
}

template<class tipo>
void Lista<tipo>::borrarInicio() {
    Nodo<tipo> *temp = raiz;
    if(temp->getSiguiente()!= nullptr){
        temp=temp->getSiguiente();
        raiz->setSiguiente(temp->getSiguiente());
        delete temp;
    }
}

template<class tipo>
Lista<tipo>::Lista() {
    raiz = new Nodo<tipo>;
}

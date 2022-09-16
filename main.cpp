#include "Menu.h"
//#include "PilaLista.cpp"
//#include "Hanoi.h"

int main() {
/*    int n;
    cout<<"Ingrese la cantidad de discos: ";
    cin>>n;
    cout<<"La cantidad minima de movimientos para ganar con "<<n<<" discos es de "<< Game<Hanoi>::movimientosMinimos(n) <<endl;*/

/*    PilaLista<Hanoi> *pilaLista1 = new PilaLista<Hanoi>;
    pilaLista1->push(new Hanoi(1));
    cout << pilaLista1->size() << endl;
    cout << *pilaLista1->top() <<endl;
    pilaLista1->push(new Hanoi(2));
    cout << pilaLista1->size() << endl;
    cout << *pilaLista1->top() << endl;
    pilaLista1->pop();

    cout << pilaLista1->size() << endl;
    cout << *pilaLista1->top() << endl;

    PilaLista<Hanoi> *pilaLista2 = new PilaLista<Hanoi>;
    pilaLista2->push(new Hanoi(2));*/


   Menu* m = new Menu();
    m->imprimeMenu();

    delete m;
    return 0;
}

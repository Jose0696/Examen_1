#include "Menu.h"

int main() {
    Menu* m = new Menu();
    m->imprimeMenu();

    delete m;
    return 0;
}

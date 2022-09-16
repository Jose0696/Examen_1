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
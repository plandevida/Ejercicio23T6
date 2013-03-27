//
//  main.cpp
//  Ejercicio23T6
//
//  Created by Dani on 27/03/13.
//  Copyright (c) 2013 Dani. All rights reserved.
//

#include <iostream>
#include "ListaConInversos.h"

int main(int argc, const char * argv[]) {

    ListaConInversos<int> a;
    
    for (int i = 0; i < 10; i++) {
        a.ponDr(i);
    }
    
    ListaConInversos<int>::Iterador it = a.principio();
    ListaConInversos<int>::IteradorInverso itInverso = a.principioInverso();
    
    while(it != a.final()) {
        std::cout << it.elem();
        it.avanza();
    }
    std::cout << std::endl;
    
    while (itInverso != a.finalInverso()) {
        std::cout << itInverso.elem();
        itInverso.avanzaInverso();
    }
    
    return 0;
}


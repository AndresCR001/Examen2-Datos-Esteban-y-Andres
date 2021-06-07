#pragma once
//
// Created by Esteb on 5/27/2021.
//

#ifndef EXAMEN2_COLACIRCULAR_H
#define EXAMEN2_COLACIRCULAR_H

#include <stdlib.h>

#define MAXTAMQ 7000
typedef struct {
    int listaCola[MAXTAMQ];
    int frente, final;
}Cola;
int siguiente(int n) {
    return (n + 1) % MAXTAMQ;
}
void crearCola(Cola* cola) {
    cola->frente = 0;
    cola->final = MAXTAMQ - 1;
}
int colaLlena(Cola cola) {
    return  cola.frente == siguiente(siguiente(cola.frente));
}
void insertarEncola(Cola* cola, int entrada) { //entrada es el num aleatorio
    if (colaLlena(*cola)) {
        exit(1);
    }
    cola->final = siguiente(cola->final);
    cola->listaCola[cola->final] = entrada;

}


#endif //EXAMEN2_COLACIRCULAR_H